#ifndef WIDGET_H
#define WIDGET_H

#include <QMenu>
#include <QWidget>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QFile>
#include <QDir>
#include <QProcess>
#include <QFileInfo>
#include <QDateTime>
#include <QJsonObject>
#include <QDate>
#include <QLabel>
#include <QJsonArray>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;
    QMenu *menuQuit;
    QPoint mOffset;      //偏移值
    int offSet;
    QNetworkReply *reply;
    QString Token;
    QString cityId;
    QString lat;         //搜索城市的经度
    QString lon;         //纬度
    QString cityName;
    QVector<QString> tempsH;     //最高温
    QVector<QString> tempsL;     //最低温
    QMap<QString,QString> mTypeMap;
    // QJsonArray daily;
    QJsonObject day0obj;    //第一天的json数据对象


    void getCityId();
    void getToken();
    void getWeather();
    void gettemp();
    void getAir();
    void readTokenFile(const QString &path);
    void parseCityJsonData(QByteArray rawData);
    void parseWeatherJsonData(QByteArray rawData);
    void parseTempJsonData(QByteArray rawData);
    void parseAirJsonData(QByteArray rawData);
    void drawTempLineHigh();
    void drawTempLineLow();
private slots:
    void readHttpReplyId(QNetworkReply *reply);
    void readHttpReply(QNetworkReply *reply);
    void readHttpReplyTemp(QNetworkReply *reply);
    void readHttpReplyAir(QNetworkReply *reply);
    void on_sousuo_pb_clicked();

protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    bool eventFilter(QObject *watched,QEvent *event);
};
#endif // WIDGET_H
