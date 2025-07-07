#include "widget.h"
#include "ui_widget.h"

#include <QMouseEvent>
#include <QNetworkReply>
#include <QString>
#include <QMessageBox>
#include <QJsonDocument>
#include <QJsonArray>
#include <QTimer>
#include <QPainter>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    mTypeMap.insert("暴雪",":/image/baoxve.png");
    mTypeMap.insert("暴雨",":/image/baoyu.png");
    mTypeMap.insert("大到暴雨",":/image/baoyu.png");
    mTypeMap.insert("中雨",":/image/zhongyv.png");
    mTypeMap.insert("小雨",":/image/xiaoyv.png");
    mTypeMap.insert("晴",":/image/qing.png");
    mTypeMap.insert("多云",":/image/duoyun.png");
    mTypeMap.insert("阴",":/image/yintian.png");
    mTypeMap.insert("阵雨",":/image/zhongyv.png");
    mTypeMap.insert("雷阵雨",":/image/leizhenyv.png");
    mTypeMap.insert("中到大雨",":/image/zhongyv.png");


    this->setFont(QFont("Arial",15));
    setFixedSize(477,780);
    setWindowFlag(Qt::FramelessWindowHint);     //去除边框

    menuQuit = new QMenu(this);

    //设置菜单项文字颜色
    menuQuit->setStyleSheet("QMenu::item{color:white;})");

    QAction *closeAct = new QAction(QIcon(":/image/tuichu.png"),tr("退出"),this);
    menuQuit->addAction(closeAct);
    connect(menuQuit,&QMenu::triggered,this
            ,[=]{
        this->close();
    });
    //初始化城市名字
    cityName = "英德";
    getToken();

    // Token读取完成后，可以继续执行后续操作
    if (!Token.isEmpty()) {
        getCityId();
    }

}

Widget::~Widget()
{
    delete ui;
}

void Widget::parseCityJsonData(QByteArray rawData)
{
    QJsonDocument jsonObj = QJsonDocument::fromJson(rawData);
    if(!jsonObj.isNull() && jsonObj.isObject())
    {
        QJsonObject objRoot = jsonObj.object();
        // 获取location数组
        QJsonArray location = objRoot["location"].toArray();
        if(!location.empty())
        {
            QJsonObject obj = location[0].toObject();
            QString cityName = obj["name"].toString();
            ui->city_lb->setText(cityName+"市");
            cityId = obj["id"].toString();
            lat = obj["lat"].toString();
            lon = obj["lon"].toString();
            qDebug()<<cityId;
            qDebug()<<lat;
            qDebug()<<lon;
        }
    }
}

void Widget::parseWeatherJsonData(QByteArray rawData)
{
    QJsonDocument jsonObj = QJsonDocument::fromJson(rawData);
    if(!jsonObj.isNull() && jsonObj.isObject())
    {
        QJsonObject objRoot = jsonObj.object();
        //获取daily数组
        QJsonArray daily = objRoot["daily"].toArray();
        if(!daily.isEmpty())
        {
            //daily数组里面的第一个对象
            //今天
            day0obj = daily[0].toObject();
            QString date0 = day0obj["fxDate"].toString();
            ui->data_lb->setText(date0);
            //当天天气
            QString weather = day0obj["textDay"].toString();
            ui->today_weather_lb->setText(weather);
            //当天天气图标
            ui->weather_lb_icon->setPixmap(mTypeMap[day0obj["textDay"].toString()]);
            //风向
            QString fengxiang = day0obj["windDirDay"].toString();
            //风向等级
            QString fengxiangLV = day0obj["windScaleDay"].toString();
            ui->fengxiang_lb->setText(fengxiang);
            ui->fengxiangLV_lb->setText(fengxiangLV+"级");
            //相对湿度
            QString shidu = day0obj["humidity"].toString();
            ui->shiduLV_lb->setText(shidu+"%");
            //当天最低温度
            QString minwd = day0obj["tempMin"].toString();
            //当天最高温度
            QString maxwd = day0obj["tempMax"].toString();
            ui->tempRange_lb->setText(minwd+"~"+maxwd);


            // 创建一个QLabel指针数组
            //六天日期
            QVector<QLabel*> data_lbs = {
                ui->data_lb0,
                ui->data_lb1,
                ui->data_lb2,
                ui->data_lb3,
                ui->data_lb4,
                ui->data_lb5,
            };
            //六天天气情况
            QVector<QLabel*> weather_lbs = {
                ui->weather_lb0,
                ui->weather_lb1,
                ui->weather_lb2,
                ui->weather_lb3,
                ui->weather_lb4,
                ui->weather_lb5,
            };
            //六天天气图标
            QVector<QLabel*> weathericon_lbs = {
                ui->weathericon_lb0,
                ui->weathericon_lb1,
                ui->weathericon_lb2,
                ui->weathericon_lb3,
                ui->weathericon_lb4,
                ui->weathericon_lb5,
            };
            //星期
            QVector<QLabel*> day_lbs = {
                ui->day_lb0,
                ui->day_lb1,
                ui->day_lb2,
                ui->day_lb3,
                ui->day_lb4,
                ui->day_lb5,
            };
            // 风向
            QVector<QLabel*> fengxiang_lbs = {
                ui->fengxiang_lb0,
                ui->fengxiang_lb1,
                ui->fengxiang_lb2,
                ui->fengxiang_lb3,
                ui->fengxiang_lb4,
                ui->fengxiang_lb5,
            };
            // 风速大小
            QVector<QLabel*> fengxiangLV_lbs = {
                ui->fengxiangLV_lb0,
                ui->fengxiangLV_lb1,
                ui->fengxiangLV_lb2,
                ui->fengxiangLV_lb3,
                ui->fengxiangLV_lb4,
                ui->fengxiangLV_lb5,
            };

            // 循环设置数据，将组件存放到vector中进行存放
            for(int i = 0;i < data_lbs.size();i++)
            {
                QJsonObject day1obj = daily[i].toObject();
                QString datei = day1obj["fxDate"].toString();       //datei:获取到的日期
                QDate date = QDate::fromString(datei,"yyyy-MM-dd"); //使用QDate获取周几的数据
                QLocale chineseLocale(QLocale::Chinese);            //获取中文显示
                QString chineseWeekday = chineseLocale.dayName(date.dayOfWeek(), QLocale::LongFormat);
                day_lbs[i]->setText(chineseWeekday);                //将获取到的信息设置到label上
                datei = datei.mid(5);                               //从获取到的日期上去出前5位   (yyyy-)MM-dd
                data_lbs[i]->setText(datei);                        //将数据设置到data_lb上
            }
            for(int i = 0;i < weather_lbs.size();i++)
            {
                QJsonObject obj = daily[i].toObject();
                QString weather = obj["textDay"].toString();
                weather_lbs[i]->setText(weather);
                weathericon_lbs[i]->setPixmap(mTypeMap[obj["textDay"].toString()]);
                QString fengxiang = obj["windDirDay"].toString();
                fengxiang_lbs[i]->setText(fengxiang);
                QString fengsu = obj["windScaleDay"].toString();
                fengxiangLV_lbs[i]->setText(fengsu+"级");
            }
            for(int i = 0;i<6;i++)
            {
                QJsonObject dayObj = daily[i].toObject();
                QString temph = dayObj["tempMax"].toString();
                tempsH.append(temph);
                QString templ = dayObj["tempMin"].toString();
                tempsL.append(templ);
            }


            ui->widget0404->installEventFilter(this);
            ui->widget0405->installEventFilter(this);
            update();

        }
    }
}

void Widget::parseTempJsonData(QByteArray rawData)
{

}

void Widget::parseAirJsonData(QByteArray rawData)
{
    QVector<QLabel*> air_lbs = {
        ui->air_lb_0,
        ui->air_lb_1,
        ui->air_lb_2,
        ui->air_lb_3,
        ui->air_lb_4,
        ui->air_lb_5,
    };

    qDebug()<<"***************parseAirJsonData:";
    QJsonDocument jsonObj = QJsonDocument::fromJson(rawData);
    if(!jsonObj.isNull() && jsonObj.isObject())
    {
        QJsonArray days = jsonObj["days"].toArray();
        QJsonObject daysobj = days[0].toObject();
        QJsonArray indexes = daysobj["indexes"].toArray();
        if(!indexes.isEmpty())
        {
            QJsonObject day0 = indexes[0].toObject();
            QString category = day0["category"].toString();
            ui->air_lb->setText(category);
            // qDebug()<<"---------------------"<<category;
            QString aqiDisplay = day0["aqiDisplay"].toString();
            ui->PM25LV_lb->setText(aqiDisplay);
            // qDebug()<<"---------------------"<<aqiDisplay;
            QJsonObject healths = day0["health"].toObject();
            QString effect = healths["effect"].toString();
            ui->gm_lb->setText("温馨提示："+effect);
        }
        for(int i = 0;i < 3;i++)
        {
            QJsonObject daysobj = days[i].toObject();
            QJsonObject day0 = indexes[0].toObject();
            QString category = day0["category"].toString();
            air_lbs[i]->setText(category);
            if(category=="优")
            {
                air_lbs[i]->setStyleSheet("background-color:rgb(150,213,32); border-radius:7px;");
            }
            if(category=="良")
            {
                air_lbs[i]->setStyleSheet("background-color:rgb(241,224,103); border-radius:7px;");
            }
            if(category=="轻度污染")
            {
                air_lbs[i]->setStyleSheet("background-color:rgb(255,199,199); border-radius:7px;");
            }
            if(category=="中度污染")
            {
                air_lbs[i]->setStyleSheet("background-color:rgb(255,17,17); border-radius:7px;");
            }
            if(category=="重度污染")
            {
                air_lbs[i]->setStyleSheet("background-color:rgb(153,0,0); border-radius:7px;");
            }
        }
        for(int i = 3;i<6;i++)
        {
            air_lbs[i]->setText("N/A");
            air_lbs[i]->setStyleSheet("background-color:rgb(255,200,230); border-radius:7px;");
        }


    }
}

void Widget::drawTempLineHigh()
{
    QVector<QLabel *> air_lbs =
        {
            ui->air_lb_0,
            ui->air_lb_1,
            ui->air_lb_2,
            ui->air_lb_3,
            ui->air_lb_4,
            ui->air_lb_5,
        };

    // 添加安全检查
    if(tempsH.size() == 0) {
        qDebug() << "Temps数组为空，无法绘制温度曲线";
        return;
    }

    if(tempsH.size() < 6) {
        qDebug() << "Temps数组大小不足:" << tempsH.size() << "，需要6个元素";
        return;
    }

    QPainter painter(ui->widget0404);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setBrush(Qt::yellow);
    painter.setPen(Qt::yellow);

    int avg;
    int sum = 0;
    int middle = ui->widget0404->height()/2;
    for(int i = 0;i<6;i++)
    {
        sum += tempsH[i].toInt();
    }
    avg = sum/6;

    //定义六个点
    QPoint points[6];

    for(int i = 0;i < 6;i++)
    {
        points[i].setX(air_lbs[i]->x()+air_lbs[i]->width()/2);
        offSet = (tempsH[i].toInt() - avg)*3;
        points[i].setY(middle - offSet);
        //画出六个点
        painter.drawEllipse(QPoint(points[i]),2,2);
        //画出当天温度
        painter.drawText(points[i].x()-15,points[i].y()-8,tempsH[i]+"℃");
    }
    for(int i = 0;i<5;i++)
    {
        //画出五条线
        painter.drawLine(points[i],points[i+1]);
    }

    // painter.drawLine(QPoint(10,10),QPoint(30,30));
}

void Widget::drawTempLineLow()
{
    QVector<QLabel *> air_lbs =
        {
            ui->air_lb_0,
            ui->air_lb_1,
            ui->air_lb_2,
            ui->air_lb_3,
            ui->air_lb_4,
            ui->air_lb_5,
        };

    // 添加安全检查
    if(tempsL.size() == 0) {
        qDebug() << "Temps数组为空，无法绘制温度曲线";
        return;
    }

    if(tempsL.size() < 6) {
        qDebug() << "TempsL数组大小不足:" << tempsL.size() << "，需要6个元素";
        return;
    }

    QPainter painter(ui->widget0405);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.setBrush(Qt::yellow);
    painter.setPen(QColor(70,192,203));

    int avg;
    int sum = 0;
    int middle = ui->widget0405->height()/2;
    for(int i = 0;i<6;i++)
    {
        sum += tempsL[i].toInt();
    }
    avg = sum/6;

    //定义六个点
    QPoint points[6];

    for(int i = 0;i < 6;i++)
    {
        points[i].setX(air_lbs[i]->x()+air_lbs[i]->width()/2);
        offSet = (tempsL[i].toInt() - avg)*3;
        points[i].setY(middle - offSet);
        //画出六个点
        painter.drawEllipse(QPoint(points[i]),2,2);
        //画出当天温度
        painter.drawText(points[i].x()-15,points[i].y()-15,tempsL[i]+"℃");
    }
    for(int i = 0;i<5;i++)
    {
        //画出五条线
        painter.drawLine(points[i],points[i+1]);
    }
}



void Widget::getCityId()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager;
    QNetworkRequest res;
    res.setUrl(QUrl(QString("https://q37p3yxjxu.re.qweatherapi.com/geo/v2/city/lookup?location=%1").arg(cityName)));
    QByteArray token = Token.toUtf8();
    res.setRawHeader("Authorization",token);
    reply = manager->get(res);
    connect(manager,&QNetworkAccessManager::finished
            ,this,&Widget::readHttpReplyId);
}

void Widget::getToken()
{
    QString path = "D:/1AAXX/QTp/TQYB/Token.txt";
    QFileInfo info(path);
    //最后修改时间
    QDateTime modTime = info.lastModified();
    //当前时间
    QDateTime currentTime = QDateTime::currentDateTime();
    // 计算文件最后修改时间与当前时间的差值
    qint64 timeDiff = modTime.secsTo(currentTime);
    if(!info.exists()||timeDiff>900)
    {
        QProcess *p = new QProcess(this);
        p->setWorkingDirectory("D:/1AAXX/QTp/TQYB");
        QString com = "D:/1AAXX/QTp/TQYB/getToken.bat";
        // 连接进程完成信号
        connect(p, QOverload<int, QProcess::ExitStatus>::of(&QProcess::finished),
                this, [this, path, p](int exitCode, QProcess::ExitStatus exitStatus) {
                    if (exitCode == 0) {
                        // 批处理执行成功，读取Token文件
                        QTimer::singleShot(1000, this, [this, path]() {
                            qDebug() << "批处理执行成功，开始读取Token文件";
                            readTokenFile(path);
                        });
                    } else {
                        qDebug() << "获取Token失败，退出码:" << exitCode;
                        QMessageBox::warning(this, "错误", "Token获取失败，请检查网络连接");
                    }
                    p->deleteLater(); // 清理进程对象
                });

        p->start(com);
        qDebug() << "正在异步获取Token...";
    }
    else
    {
        qDebug()<<"不需要重新获取Token";
        // 直接读取现有Token
        readTokenFile(path);
    }

}

void Widget::getWeather()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager;
    QNetworkRequest res;
    res.setUrl(QUrl(QString("https://q37p3yxjxu.re.qweatherapi.com/v7/weather/7d?location=%1").arg(cityId)));
    QByteArray token = Token.toUtf8();
    res.setRawHeader("Authorization",token);
    reply = manager->get(res);
    connect(manager,&QNetworkAccessManager::finished
            ,this,&Widget::readHttpReply);
}

void Widget::gettemp()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager;
    QNetworkRequest res;
    res.setUrl(QUrl(QString("https://q37p3yxjxu.re.qweatherapi.com/v7/weather/24h?location=%1").arg(cityId)));
    QByteArray token = Token.toUtf8();
    res.setRawHeader("Authorization",token);
    reply = manager->get(res);
    connect(manager,&QNetworkAccessManager::finished
            ,this,&Widget::readHttpReplyTemp);
}

void Widget::getAir()
{
    QNetworkAccessManager *manager = new QNetworkAccessManager;
    QNetworkRequest res;
    res.setUrl(QUrl(QString("https://q37p3yxjxu.re.qweatherapi.com/airquality/v1/daily/%1/%2").arg(lat).arg(lon)));
    QByteArray token = Token.toUtf8();
    res.setRawHeader("Authorization",token);
    reply = manager->get(res);
    connect(manager,&QNetworkAccessManager::finished
            ,this,&Widget::readHttpReplyAir);
}

void Widget::readTokenFile(const QString &path)
{
    QFile file(path);
    bool res = file.open(QIODevice::ReadWrite);
    if(res)
    {
        qDebug()<<"打开成功";
        QTextStream in(&file);
        while(!in.atEnd())
        {
            Token = in.readLine();
        }
        qDebug()<<Token;
        file.close();

    }
    else
    {
        qDebug()<<"打开失败";
    }
}

void Widget::readHttpReplyId(QNetworkReply *reply)
{
    int resCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();

    if(reply->error() == QNetworkReply::NoError && resCode == 200)
    {
        qDebug()<<"请求成功"<<resCode;
        QByteArray data = reply->readAll();

        parseCityJsonData(data);

        qDebug()<<QString::fromUtf8(data);

        getWeather();

    }
    else
    {
        qDebug()<<resCode;
        qDebug()<<"请求失败："<<reply->errorString();
        // QMessageBox::warning(this,"错误","网络请求失败",QMessageBox::StandardButton::Ok);
        QMessageBox mes;
        mes.setWindowTitle("错误");
        mes.setText("网络请求失败");
        // mes.setStyleSheet("");
        mes.setStandardButtons(QMessageBox::Ok);
        // mes.setWindowFlag(Qt::FramelessWindowHint);
        mes.exec();
    }

}

void Widget::readHttpReply(QNetworkReply *reply)
{
    int resCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();

    if(reply->error() == QNetworkReply::NoError && resCode == 200)
    {
        qDebug()<<"请求成功"<<resCode;
        QByteArray data = reply->readAll();

        parseWeatherJsonData(data);

        qDebug()<<QString::fromUtf8(data);

        gettemp();
    }
    else
    {
        qDebug()<<resCode;
        qDebug()<<"请求失败："<<reply->errorString();
        // QMessageBox::warning(this,"错误","网络请求失败",QMessageBox::StandardButton::Ok);
        QMessageBox mes;
        mes.setWindowTitle("错误");
        mes.setText("网络请求失败");
        // mes.setStyleSheet("");
        mes.setStandardButtons(QMessageBox::Ok);
        // mes.setWindowFlag(Qt::FramelessWindowHint);
        mes.exec();
    }
}

void Widget::readHttpReplyTemp(QNetworkReply *reply)
{
    int resCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();

    if(reply->error() == QNetworkReply::NoError && resCode == 200)
    {
        qDebug()<<"请求成功"<<resCode;
        QByteArray data = reply->readAll();

        parseTempJsonData(data);

        qDebug()<<QString::fromUtf8(data);

        getAir();
    }
    else
    {
        qDebug()<<resCode;
        qDebug()<<"请求失败："<<reply->errorString();
        // QMessageBox::warning(this,"错误","网络请求失败",QMessageBox::StandardButton::Ok);
        QMessageBox mes;
        mes.setWindowTitle("错误");
        mes.setText("网络请求失败");
        // mes.setStyleSheet("");
        mes.setStandardButtons(QMessageBox::Ok);
        // mes.setWindowFlag(Qt::FramelessWindowHint);
        mes.exec();
    }
}

void Widget::readHttpReplyAir(QNetworkReply *reply)
{
    int resCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();

    if(reply->error() == QNetworkReply::NoError && resCode == 200)
    {
        qDebug()<<"请求成功"<<resCode;
        QByteArray data = reply->readAll();

        parseAirJsonData(data);

        qDebug()<<QString::fromUtf8(data);
    }
    else
    {
        qDebug()<<resCode;
        qDebug()<<"请求失败："<<reply->errorString();
        // QMessageBox::warning(this,"错误","网络请求失败",QMessageBox::StandardButton::Ok);
        QMessageBox mes;
        mes.setWindowTitle("错误");
        mes.setText("网络请求失败");
        // mes.setStyleSheet("");
        mes.setStandardButtons(QMessageBox::Ok);
        // mes.setWindowFlag(Qt::FramelessWindowHint);
        mes.exec();
    }
}


void Widget::mousePressEvent(QMouseEvent *event)
{
    //鼠标右键按下
    if(event->button() == Qt::RightButton)
    {
        menuQuit->exec(QCursor::pos());
    }
    //鼠标当前位置，窗口当前位置，窗口新位置
    //鼠标左键按下
    if(event->button() == Qt::LeftButton)
    {
        // 鼠标当前位置event->globalPos();
        // 窗口当前位置this->pos();
        if(event->pos().y()<=100)
        {
            mOffset = event->globalPos() - this->pos();
        }
    }
}

//鼠标移动事件
void Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(event->pos().y()<=100)
    {
        this->move(event->globalPos() - mOffset);
    }
}

bool Widget::eventFilter(QObject *watched, QEvent *event)
{
    if(watched == ui->widget0404 && event->type() == QEvent::Paint)
    {
        drawTempLineHigh();
    }
    else if(watched == ui->widget0405 && event->type() == QEvent::Paint)
    {
        drawTempLineLow();
    }
    return QWidget::eventFilter(watched, event);
}

void Widget::on_sousuo_pb_clicked()
{
    // cityId = NULL;
    // lat = NULL;
    // lon = NULL;
    cityId.clear();
    lat.clear();
    lon.clear();
    tempsH.clear();
    tempsL.clear();
    QString newCityName = ui->sousuo_le->text();
    cityName = newCityName;
    getCityId();
}

