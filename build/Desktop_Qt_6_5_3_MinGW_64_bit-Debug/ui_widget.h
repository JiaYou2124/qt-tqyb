/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QWidget *widget01;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QLineEdit *sousuo_le;
    QPushButton *sousuo_pb;
    QSpacerItem *horizontalSpacer_2;
    QLabel *data_lb;
    QWidget *widget02;
    QHBoxLayout *horizontalLayout_5;
    QLabel *weather_lb_icon;
    QGridLayout *gridLayout_2;
    QLabel *today_weather_lb;
    QLabel *city_lb;
    QLabel *tempRange_lb;
    QSpacerItem *horizontalSpacer;
    QLabel *temp_lb;
    QWidget *widget03;
    QVBoxLayout *verticalLayout;
    QLabel *gm_lb;
    QWidget *widget0301;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *kongqi_lb;
    QLabel *air_lb;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QVBoxLayout *verticalLayout_2;
    QLabel *fengxiang_lb;
    QLabel *fengxiangLV_lb;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *PM25_lb;
    QLabel *PM25LV_lb;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *shidu_lb;
    QLabel *shiduLV_lb;
    QWidget *widget04;
    QVBoxLayout *verticalLayout_6;
    QWidget *widget0401;
    QGridLayout *gridLayout_3;
    QLabel *data_lb3;
    QLabel *data_lb0;
    QLabel *data_lb2;
    QLabel *day_lb0;
    QLabel *day_lb2;
    QLabel *day_lb3;
    QLabel *day_lb4;
    QLabel *data_lb4;
    QLabel *day_lb1;
    QLabel *data_lb1;
    QLabel *day_lb5;
    QLabel *data_lb5;
    QWidget *widget0402;
    QGridLayout *gridLayout_4;
    QLabel *weathericon_lb1;
    QLabel *weathericon_lb0;
    QLabel *weather_lb2;
    QLabel *weathericon_lb4;
    QLabel *weather_lb0;
    QLabel *weathericon_lb2;
    QLabel *weathericon_lb5;
    QLabel *weather_lb3;
    QLabel *weathericon_lb3;
    QLabel *weather_lb1;
    QLabel *weather_lb4;
    QLabel *weather_lb5;
    QWidget *widget0403;
    QHBoxLayout *horizontalLayout_7;
    QLabel *air_lb_0;
    QLabel *air_lb_1;
    QLabel *air_lb_2;
    QLabel *air_lb_3;
    QLabel *air_lb_4;
    QLabel *air_lb_5;
    QWidget *widget0404;
    QWidget *widget0405;
    QWidget *widget0406;
    QGridLayout *gridLayout_5;
    QLabel *fengxiangLV_lb2;
    QLabel *fengxiangLV_lb4;
    QLabel *fengxiang_lb2;
    QLabel *fengxiangLV_lb0;
    QLabel *fengxiang_lb3;
    QLabel *fengxiangLV_lb3;
    QLabel *fengxiang_lb4;
    QLabel *fengxiang_lb0;
    QLabel *fengxiang_lb1;
    QLabel *fengxiangLV_lb1;
    QLabel *fengxiangLV_lb5;
    QLabel *fengxiang_lb5;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(477, 780);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(9, 9, 459, 761));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        widget01 = new QWidget(layoutWidget);
        widget01->setObjectName("widget01");
        horizontalLayout_6 = new QHBoxLayout(widget01);
        horizontalLayout_6->setSpacing(10);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        sousuo_le = new QLineEdit(widget01);
        sousuo_le->setObjectName("sousuo_le");
        sousuo_le->setStyleSheet(QString::fromUtf8(" QLineEdit {\n"
"     border: 2px solid gray;\n"
"     border-radius: 6px;\n"
"     padding: 0 8px;\n"
"     background: white;\n"
"     selection-background-color: darkgray;\n"
"	\n"
"	color: rgb(0, 0, 0);\n"
" }\n"
""));

        horizontalLayout_8->addWidget(sousuo_le);

        sousuo_pb = new QPushButton(widget01);
        sousuo_pb->setObjectName("sousuo_pb");
        sousuo_pb->setMinimumSize(QSize(35, 35));
        sousuo_pb->setMaximumSize(QSize(35, 35));
        sousuo_pb->setStyleSheet(QString::fromUtf8("border-radius: 10px;"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/sousuo.png"), QSize(), QIcon::Normal, QIcon::Off);
        sousuo_pb->setIcon(icon);

        horizontalLayout_8->addWidget(sousuo_pb);


        horizontalLayout_6->addLayout(horizontalLayout_8);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        data_lb = new QLabel(widget01);
        data_lb->setObjectName("data_lb");
        data_lb->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);"));

        horizontalLayout_6->addWidget(data_lb);


        verticalLayout_7->addWidget(widget01);

        widget02 = new QWidget(layoutWidget);
        widget02->setObjectName("widget02");
        horizontalLayout_5 = new QHBoxLayout(widget02);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        weather_lb_icon = new QLabel(widget02);
        weather_lb_icon->setObjectName("weather_lb_icon");
        weather_lb_icon->setMaximumSize(QSize(100, 100));
        weather_lb_icon->setPixmap(QPixmap(QString::fromUtf8(":/image/qingtian.png")));
        weather_lb_icon->setScaledContents(true);

        horizontalLayout_5->addWidget(weather_lb_icon);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        today_weather_lb = new QLabel(widget02);
        today_weather_lb->setObjectName("today_weather_lb");

        gridLayout_2->addWidget(today_weather_lb, 1, 0, 1, 1);

        city_lb = new QLabel(widget02);
        city_lb->setObjectName("city_lb");

        gridLayout_2->addWidget(city_lb, 0, 4, 1, 1);

        tempRange_lb = new QLabel(widget02);
        tempRange_lb->setObjectName("tempRange_lb");

        gridLayout_2->addWidget(tempRange_lb, 1, 1, 1, 2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        temp_lb = new QLabel(widget02);
        temp_lb->setObjectName("temp_lb");
        QFont font;
        font.setPointSize(32);
        temp_lb->setFont(font);

        gridLayout_2->addWidget(temp_lb, 0, 0, 1, 3);


        horizontalLayout_5->addLayout(gridLayout_2);


        verticalLayout_7->addWidget(widget02);

        widget03 = new QWidget(layoutWidget);
        widget03->setObjectName("widget03");
        widget03->setStyleSheet(QString::fromUtf8("color:rgb(255,255,255	);"));
        verticalLayout = new QVBoxLayout(widget03);
        verticalLayout->setObjectName("verticalLayout");
        gm_lb = new QLabel(widget03);
        gm_lb->setObjectName("gm_lb");

        verticalLayout->addWidget(gm_lb);

        widget0301 = new QWidget(widget03);
        widget0301->setObjectName("widget0301");
        widget0301->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 152, 34);\n"
"border-radius: 20px;"));
        gridLayout = new QGridLayout(widget0301);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setHorizontalSpacing(10);
        gridLayout->setVerticalSpacing(20);
        gridLayout->setContentsMargins(50, 30, 10, 30);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_9 = new QLabel(widget0301);
        label_9->setObjectName("label_9");
        label_9->setMinimumSize(QSize(45, 45));
        label_9->setMaximumSize(QSize(45, 45));
        label_9->setPixmap(QPixmap(QString::fromUtf8(":/image/kongqi.png")));
        label_9->setScaledContents(true);

        horizontalLayout_4->addWidget(label_9);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        kongqi_lb = new QLabel(widget0301);
        kongqi_lb->setObjectName("kongqi_lb");

        verticalLayout_5->addWidget(kongqi_lb);

        air_lb = new QLabel(widget0301);
        air_lb->setObjectName("air_lb");

        verticalLayout_5->addWidget(air_lb);


        horizontalLayout_4->addLayout(verticalLayout_5);


        gridLayout->addLayout(horizontalLayout_4, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget0301);
        label->setObjectName("label");
        label->setMinimumSize(QSize(45, 45));
        label->setMaximumSize(QSize(45, 45));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/fengsu.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        fengxiang_lb = new QLabel(widget0301);
        fengxiang_lb->setObjectName("fengxiang_lb");

        verticalLayout_2->addWidget(fengxiang_lb);

        fengxiangLV_lb = new QLabel(widget0301);
        fengxiangLV_lb->setObjectName("fengxiangLV_lb");

        verticalLayout_2->addWidget(fengxiangLV_lb);


        horizontalLayout->addLayout(verticalLayout_2);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_4 = new QLabel(widget0301);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(45, 45));
        label_4->setMaximumSize(QSize(45, 45));
        label_4->setSizeIncrement(QSize(0, 0));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/image/PM2.png")));
        label_4->setScaledContents(true);

        horizontalLayout_3->addWidget(label_4);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        PM25_lb = new QLabel(widget0301);
        PM25_lb->setObjectName("PM25_lb");

        verticalLayout_4->addWidget(PM25_lb);

        PM25LV_lb = new QLabel(widget0301);
        PM25LV_lb->setObjectName("PM25LV_lb");

        verticalLayout_4->addWidget(PM25LV_lb);


        horizontalLayout_3->addLayout(verticalLayout_4);


        gridLayout->addLayout(horizontalLayout_3, 0, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(widget0301);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(45, 45));
        label_3->setMaximumSize(QSize(45, 45));
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/image/shidu.png")));
        label_3->setScaledContents(true);

        horizontalLayout_2->addWidget(label_3);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        shidu_lb = new QLabel(widget0301);
        shidu_lb->setObjectName("shidu_lb");

        verticalLayout_3->addWidget(shidu_lb);

        shiduLV_lb = new QLabel(widget0301);
        shiduLV_lb->setObjectName("shiduLV_lb");

        verticalLayout_3->addWidget(shiduLV_lb);


        horizontalLayout_2->addLayout(verticalLayout_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);


        verticalLayout->addWidget(widget0301);

        verticalLayout->setStretch(0, 2);
        verticalLayout->setStretch(1, 3);

        verticalLayout_7->addWidget(widget03);

        widget04 = new QWidget(layoutWidget);
        widget04->setObjectName("widget04");
        verticalLayout_6 = new QVBoxLayout(widget04);
        verticalLayout_6->setObjectName("verticalLayout_6");
        widget0401 = new QWidget(widget04);
        widget0401->setObjectName("widget0401");
        gridLayout_3 = new QGridLayout(widget0401);
        gridLayout_3->setObjectName("gridLayout_3");
        gridLayout_3->setHorizontalSpacing(5);
        gridLayout_3->setVerticalSpacing(0);
        gridLayout_3->setContentsMargins(0, 0, 0, 0);
        data_lb3 = new QLabel(widget0401);
        data_lb3->setObjectName("data_lb3");
        data_lb3->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        data_lb3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data_lb3, 1, 3, 1, 1);

        data_lb0 = new QLabel(widget0401);
        data_lb0->setObjectName("data_lb0");
        data_lb0->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        data_lb0->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data_lb0, 1, 0, 1, 1);

        data_lb2 = new QLabel(widget0401);
        data_lb2->setObjectName("data_lb2");
        data_lb2->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        data_lb2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data_lb2, 1, 2, 1, 1);

        day_lb0 = new QLabel(widget0401);
        day_lb0->setObjectName("day_lb0");
        day_lb0->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        day_lb0->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day_lb0, 0, 0, 1, 1);

        day_lb2 = new QLabel(widget0401);
        day_lb2->setObjectName("day_lb2");
        day_lb2->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        day_lb2->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day_lb2, 0, 2, 1, 1);

        day_lb3 = new QLabel(widget0401);
        day_lb3->setObjectName("day_lb3");
        day_lb3->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        day_lb3->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day_lb3, 0, 3, 1, 1);

        day_lb4 = new QLabel(widget0401);
        day_lb4->setObjectName("day_lb4");
        day_lb4->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        day_lb4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day_lb4, 0, 4, 1, 1);

        data_lb4 = new QLabel(widget0401);
        data_lb4->setObjectName("data_lb4");
        data_lb4->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        data_lb4->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data_lb4, 1, 4, 1, 1);

        day_lb1 = new QLabel(widget0401);
        day_lb1->setObjectName("day_lb1");
        day_lb1->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        day_lb1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day_lb1, 0, 1, 1, 1);

        data_lb1 = new QLabel(widget0401);
        data_lb1->setObjectName("data_lb1");
        data_lb1->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        data_lb1->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data_lb1, 1, 1, 1, 1);

        day_lb5 = new QLabel(widget0401);
        day_lb5->setObjectName("day_lb5");
        day_lb5->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;"));
        day_lb5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(day_lb5, 0, 5, 1, 1);

        data_lb5 = new QLabel(widget0401);
        data_lb5->setObjectName("data_lb5");
        data_lb5->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(0, 95, 143);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;"));
        data_lb5->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(data_lb5, 1, 5, 1, 1);


        verticalLayout_6->addWidget(widget0401);

        widget0402 = new QWidget(widget04);
        widget0402->setObjectName("widget0402");
        gridLayout_4 = new QGridLayout(widget0402);
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(5);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(0, 0, 0, 0);
        weathericon_lb1 = new QLabel(widget0402);
        weathericon_lb1->setObjectName("weathericon_lb1");
        weathericon_lb1->setMaximumSize(QSize(69, 35));
        weathericon_lb1->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weathericon_lb1->setPixmap(QPixmap(QString::fromUtf8(":/image/duoyun.png")));
        weathericon_lb1->setScaledContents(true);
        weathericon_lb1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weathericon_lb1, 0, 1, 1, 1);

        weathericon_lb0 = new QLabel(widget0402);
        weathericon_lb0->setObjectName("weathericon_lb0");
        weathericon_lb0->setMaximumSize(QSize(69, 35));
        weathericon_lb0->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weathericon_lb0->setPixmap(QPixmap(QString::fromUtf8(":/image/duoyun.png")));
        weathericon_lb0->setScaledContents(true);
        weathericon_lb0->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weathericon_lb0, 0, 0, 1, 1);

        weather_lb2 = new QLabel(widget0402);
        weather_lb2->setObjectName("weather_lb2");
        weather_lb2->setMinimumSize(QSize(0, 16));
        weather_lb2->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weather_lb2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weather_lb2, 1, 2, 1, 1);

        weathericon_lb4 = new QLabel(widget0402);
        weathericon_lb4->setObjectName("weathericon_lb4");
        weathericon_lb4->setMaximumSize(QSize(69, 35));
        weathericon_lb4->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weathericon_lb4->setPixmap(QPixmap(QString::fromUtf8(":/image/duoyun.png")));
        weathericon_lb4->setScaledContents(true);
        weathericon_lb4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weathericon_lb4, 0, 4, 1, 1);

        weather_lb0 = new QLabel(widget0402);
        weather_lb0->setObjectName("weather_lb0");
        weather_lb0->setMinimumSize(QSize(0, 16));
        weather_lb0->setMaximumSize(QSize(16777215, 16777215));
        weather_lb0->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weather_lb0->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weather_lb0, 1, 0, 1, 1);

        weathericon_lb2 = new QLabel(widget0402);
        weathericon_lb2->setObjectName("weathericon_lb2");
        weathericon_lb2->setMaximumSize(QSize(69, 35));
        weathericon_lb2->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weathericon_lb2->setPixmap(QPixmap(QString::fromUtf8(":/image/duoyun.png")));
        weathericon_lb2->setScaledContents(true);
        weathericon_lb2->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weathericon_lb2, 0, 2, 1, 1);

        weathericon_lb5 = new QLabel(widget0402);
        weathericon_lb5->setObjectName("weathericon_lb5");
        weathericon_lb5->setMaximumSize(QSize(69, 35));
        weathericon_lb5->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weathericon_lb5->setPixmap(QPixmap(QString::fromUtf8(":/image/duoyun.png")));
        weathericon_lb5->setScaledContents(true);
        weathericon_lb5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weathericon_lb5, 0, 5, 1, 1);

        weather_lb3 = new QLabel(widget0402);
        weather_lb3->setObjectName("weather_lb3");
        weather_lb3->setMinimumSize(QSize(0, 16));
        weather_lb3->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weather_lb3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weather_lb3, 1, 3, 1, 1);

        weathericon_lb3 = new QLabel(widget0402);
        weathericon_lb3->setObjectName("weathericon_lb3");
        weathericon_lb3->setMaximumSize(QSize(69, 35));
        weathericon_lb3->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weathericon_lb3->setPixmap(QPixmap(QString::fromUtf8(":/image/duoyun.png")));
        weathericon_lb3->setScaledContents(true);
        weathericon_lb3->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weathericon_lb3, 0, 3, 1, 1);

        weather_lb1 = new QLabel(widget0402);
        weather_lb1->setObjectName("weather_lb1");
        weather_lb1->setMinimumSize(QSize(0, 16));
        weather_lb1->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weather_lb1->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weather_lb1, 1, 1, 1, 1);

        weather_lb4 = new QLabel(widget0402);
        weather_lb4->setObjectName("weather_lb4");
        weather_lb4->setMinimumSize(QSize(0, 16));
        weather_lb4->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weather_lb4->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weather_lb4, 1, 4, 1, 1);

        weather_lb5 = new QLabel(widget0402);
        weather_lb5->setObjectName("weather_lb5");
        weather_lb5->setMinimumSize(QSize(0, 16));
        weather_lb5->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        weather_lb5->setAlignment(Qt::AlignCenter);

        gridLayout_4->addWidget(weather_lb5, 1, 5, 1, 1);


        verticalLayout_6->addWidget(widget0402);

        widget0403 = new QWidget(widget04);
        widget0403->setObjectName("widget0403");
        horizontalLayout_7 = new QHBoxLayout(widget0403);
        horizontalLayout_7->setSpacing(5);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 5, 0, 5);
        air_lb_0 = new QLabel(widget0403);
        air_lb_0->setObjectName("air_lb_0");
        air_lb_0->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(102, 153, 0);\n"
"border-radius:6px;"));
        air_lb_0->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(air_lb_0);

        air_lb_1 = new QLabel(widget0403);
        air_lb_1->setObjectName("air_lb_1");
        air_lb_1->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(200, 170, 0);\n"
"border-radius:6px;"));
        air_lb_1->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(air_lb_1);

        air_lb_2 = new QLabel(widget0403);
        air_lb_2->setObjectName("air_lb_2");
        air_lb_2->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(102, 153, 0);\n"
"border-radius:6px;"));
        air_lb_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(air_lb_2);

        air_lb_3 = new QLabel(widget0403);
        air_lb_3->setObjectName("air_lb_3");
        air_lb_3->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(102, 153, 0);\n"
"border-radius:6px;"));
        air_lb_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(air_lb_3);

        air_lb_4 = new QLabel(widget0403);
        air_lb_4->setObjectName("air_lb_4");
        air_lb_4->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(102, 153, 0);\n"
"border-radius:6px;"));
        air_lb_4->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(air_lb_4);

        air_lb_5 = new QLabel(widget0403);
        air_lb_5->setObjectName("air_lb_5");
        air_lb_5->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"background-color: rgb(102, 153, 0);\n"
"border-radius:6px;"));
        air_lb_5->setAlignment(Qt::AlignCenter);

        horizontalLayout_7->addWidget(air_lb_5);


        verticalLayout_6->addWidget(widget0403);

        widget0404 = new QWidget(widget04);
        widget0404->setObjectName("widget0404");
        widget0404->setMinimumSize(QSize(0, 60));
        widget0404->setStyleSheet(QString::fromUtf8("background-color: rgb(108, 108, 108);\n"
"border-radius: 10px;"));

        verticalLayout_6->addWidget(widget0404);

        widget0405 = new QWidget(widget04);
        widget0405->setObjectName("widget0405");
        widget0405->setMinimumSize(QSize(0, 60));
        widget0405->setStyleSheet(QString::fromUtf8("background-color: rgb(108, 108, 108);\n"
"border-radius: 10px;"));

        verticalLayout_6->addWidget(widget0405);

        widget0406 = new QWidget(widget04);
        widget0406->setObjectName("widget0406");
        gridLayout_5 = new QGridLayout(widget0406);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_5->setHorizontalSpacing(5);
        gridLayout_5->setVerticalSpacing(0);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        fengxiangLV_lb2 = new QLabel(widget0406);
        fengxiangLV_lb2->setObjectName("fengxiangLV_lb2");
        fengxiangLV_lb2->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiangLV_lb2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiangLV_lb2, 2, 2, 1, 1);

        fengxiangLV_lb4 = new QLabel(widget0406);
        fengxiangLV_lb4->setObjectName("fengxiangLV_lb4");
        fengxiangLV_lb4->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiangLV_lb4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiangLV_lb4, 2, 4, 1, 1);

        fengxiang_lb2 = new QLabel(widget0406);
        fengxiang_lb2->setObjectName("fengxiang_lb2");
        fengxiang_lb2->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiang_lb2->setScaledContents(true);
        fengxiang_lb2->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiang_lb2, 0, 2, 2, 1);

        fengxiangLV_lb0 = new QLabel(widget0406);
        fengxiangLV_lb0->setObjectName("fengxiangLV_lb0");
        fengxiangLV_lb0->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiangLV_lb0->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiangLV_lb0, 2, 0, 1, 1);

        fengxiang_lb3 = new QLabel(widget0406);
        fengxiang_lb3->setObjectName("fengxiang_lb3");
        fengxiang_lb3->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiang_lb3->setScaledContents(true);
        fengxiang_lb3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiang_lb3, 0, 3, 2, 1);

        fengxiangLV_lb3 = new QLabel(widget0406);
        fengxiangLV_lb3->setObjectName("fengxiangLV_lb3");
        fengxiangLV_lb3->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiangLV_lb3->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiangLV_lb3, 2, 3, 1, 1);

        fengxiang_lb4 = new QLabel(widget0406);
        fengxiang_lb4->setObjectName("fengxiang_lb4");
        fengxiang_lb4->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiang_lb4->setScaledContents(true);
        fengxiang_lb4->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiang_lb4, 0, 4, 2, 1);

        fengxiang_lb0 = new QLabel(widget0406);
        fengxiang_lb0->setObjectName("fengxiang_lb0");
        fengxiang_lb0->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiang_lb0->setScaledContents(true);
        fengxiang_lb0->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiang_lb0, 0, 0, 2, 1);

        fengxiang_lb1 = new QLabel(widget0406);
        fengxiang_lb1->setObjectName("fengxiang_lb1");
        fengxiang_lb1->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiang_lb1->setScaledContents(true);
        fengxiang_lb1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiang_lb1, 0, 1, 2, 1);

        fengxiangLV_lb1 = new QLabel(widget0406);
        fengxiangLV_lb1->setObjectName("fengxiangLV_lb1");
        fengxiangLV_lb1->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiangLV_lb1->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiangLV_lb1, 2, 1, 1, 1);

        fengxiangLV_lb5 = new QLabel(widget0406);
        fengxiangLV_lb5->setObjectName("fengxiangLV_lb5");
        fengxiangLV_lb5->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-top-right-radius:0px;\n"
"border-top-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiangLV_lb5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiangLV_lb5, 2, 5, 1, 1);

        fengxiang_lb5 = new QLabel(widget0406);
        fengxiang_lb5->setObjectName("fengxiang_lb5");
        fengxiang_lb5->setStyleSheet(QString::fromUtf8("color: rgb(230, 255, 255);\n"
"border-radius:6px;\n"
"border-bottom-right-radius:0px;\n"
"border-bottom-left-radius:0px;\n"
"background-color: rgb(52, 52, 52);\n"
"padding-left:10px;\n"
"padding-right:10px;"));
        fengxiang_lb5->setScaledContents(true);
        fengxiang_lb5->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(fengxiang_lb5, 0, 5, 2, 1);


        verticalLayout_6->addWidget(widget0406);


        verticalLayout_7->addWidget(widget04);

        verticalLayout_7->setStretch(0, 1);
        verticalLayout_7->setStretch(1, 2);
        verticalLayout_7->setStretch(2, 4);
        verticalLayout_7->setStretch(3, 8);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        sousuo_pb->setText(QString());
        data_lb->setText(QCoreApplication::translate("Widget", "2025/07/01 \346\230\237\346\234\237\344\272\214", nullptr));
        weather_lb_icon->setText(QString());
        today_weather_lb->setText(QCoreApplication::translate("Widget", "\346\231\264\345\244\251", nullptr));
        city_lb->setText(QCoreApplication::translate("Widget", "\345\271\277\345\267\236\345\270\202", nullptr));
        tempRange_lb->setText(QCoreApplication::translate("Widget", "20~26\342\204\203", nullptr));
        temp_lb->setText(QCoreApplication::translate("Widget", "23\302\260", nullptr));
        gm_lb->setText(QCoreApplication::translate("Widget", "\346\204\237\345\206\222\346\214\207\346\225\260\357\274\232\345\220\204\347\261\273\344\272\272\347\276\244\345\217\257\344\273\245\350\207\252\347\224\261\346\264\273\345\212\250", nullptr));
        label_9->setText(QString());
        kongqi_lb->setText(QCoreApplication::translate("Widget", "\347\251\272\346\260\224\350\264\250\351\207\217", nullptr));
        air_lb->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        label->setText(QString());
        fengxiang_lb->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        fengxiangLV_lb->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        label_4->setText(QString());
        PM25_lb->setText(QCoreApplication::translate("Widget", "PM2.5", nullptr));
        PM25LV_lb->setText(QCoreApplication::translate("Widget", "22", nullptr));
        label_3->setText(QString());
        shidu_lb->setText(QCoreApplication::translate("Widget", "\346\271\277\345\272\246", nullptr));
        shiduLV_lb->setText(QCoreApplication::translate("Widget", "85%", nullptr));
        data_lb3->setText(QCoreApplication::translate("Widget", "06/30", nullptr));
        data_lb0->setText(QCoreApplication::translate("Widget", "06/30", nullptr));
        data_lb2->setText(QCoreApplication::translate("Widget", "06/30", nullptr));
        day_lb0->setText(QCoreApplication::translate("Widget", "\344\273\212\345\244\251", nullptr));
        day_lb2->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        day_lb3->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        day_lb4->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        data_lb4->setText(QCoreApplication::translate("Widget", "06/30", nullptr));
        day_lb1->setText(QCoreApplication::translate("Widget", "\346\230\216\345\244\251", nullptr));
        data_lb1->setText(QCoreApplication::translate("Widget", "06/30", nullptr));
        day_lb5->setText(QCoreApplication::translate("Widget", "\346\230\250\345\244\251", nullptr));
        data_lb5->setText(QCoreApplication::translate("Widget", "06/30", nullptr));
        weathericon_lb1->setText(QString());
        weathericon_lb0->setText(QString());
        weather_lb2->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weathericon_lb4->setText(QString());
        weather_lb0->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weathericon_lb2->setText(QString());
        weathericon_lb5->setText(QString());
        weather_lb3->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weathericon_lb3->setText(QString());
        weather_lb1->setText(QCoreApplication::translate("Widget", "\345\244\247\345\210\260\346\232\264\351\233\250", nullptr));
        weather_lb4->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        weather_lb5->setText(QCoreApplication::translate("Widget", "\345\244\232\344\272\221", nullptr));
        air_lb_0->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_lb_1->setText(QCoreApplication::translate("Widget", "\350\211\257", nullptr));
        air_lb_2->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_lb_3->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_lb_4->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        air_lb_5->setText(QCoreApplication::translate("Widget", "\344\274\230", nullptr));
        fengxiangLV_lb2->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        fengxiangLV_lb4->setText(QCoreApplication::translate("Widget", "5\347\272\247", nullptr));
        fengxiang_lb2->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        fengxiangLV_lb0->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        fengxiang_lb3->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        fengxiangLV_lb3->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        fengxiang_lb4->setText(QCoreApplication::translate("Widget", "\344\270\234\351\243\216", nullptr));
        fengxiang_lb0->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
        fengxiang_lb1->setText(QCoreApplication::translate("Widget", "\344\270\234\345\214\227\351\243\216", nullptr));
        fengxiangLV_lb1->setText(QCoreApplication::translate("Widget", "3\347\272\247", nullptr));
        fengxiangLV_lb5->setText(QCoreApplication::translate("Widget", "2\347\272\247", nullptr));
        fengxiang_lb5->setText(QCoreApplication::translate("Widget", "\344\270\234\345\215\227\351\243\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
