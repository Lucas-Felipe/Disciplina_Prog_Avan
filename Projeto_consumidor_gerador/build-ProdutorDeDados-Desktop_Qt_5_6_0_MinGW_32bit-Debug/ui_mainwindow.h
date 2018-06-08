/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QSlider *horizontalSlider_minimo;
    QSlider *horizontalSlider_maximo;
    QSlider *horizontalSlider_timing;
    QLCDNumber *lcdNumber_minimo;
    QLCDNumber *lcdNumber_maximo;
    QLabel *label_timing;
    QLabel *label_maxtiming;
    QLabel *label_status;
    QLabel *label_Max;
    QLabel *label_min;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_desconnect;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QTextEdit *textEdit_IP;
    QTextBrowser *textBrowser_dados;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(564, 400);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        horizontalSlider_minimo = new QSlider(centralWidget);
        horizontalSlider_minimo->setObjectName(QStringLiteral("horizontalSlider_minimo"));
        horizontalSlider_minimo->setGeometry(QRect(10, 110, 141, 19));
        horizontalSlider_minimo->setOrientation(Qt::Horizontal);
        horizontalSlider_maximo = new QSlider(centralWidget);
        horizontalSlider_maximo->setObjectName(QStringLiteral("horizontalSlider_maximo"));
        horizontalSlider_maximo->setGeometry(QRect(10, 180, 141, 19));
        horizontalSlider_maximo->setOrientation(Qt::Horizontal);
        horizontalSlider_timing = new QSlider(centralWidget);
        horizontalSlider_timing->setObjectName(QStringLiteral("horizontalSlider_timing"));
        horizontalSlider_timing->setGeometry(QRect(60, 240, 141, 19));
        horizontalSlider_timing->setOrientation(Qt::Horizontal);
        lcdNumber_minimo = new QLCDNumber(centralWidget);
        lcdNumber_minimo->setObjectName(QStringLiteral("lcdNumber_minimo"));
        lcdNumber_minimo->setGeometry(QRect(160, 120, 64, 23));
        lcdNumber_minimo->setSegmentStyle(QLCDNumber::Flat);
        lcdNumber_maximo = new QLCDNumber(centralWidget);
        lcdNumber_maximo->setObjectName(QStringLiteral("lcdNumber_maximo"));
        lcdNumber_maximo->setGeometry(QRect(160, 190, 64, 23));
        lcdNumber_maximo->setSegmentStyle(QLCDNumber::Flat);
        label_timing = new QLabel(centralWidget);
        label_timing->setObjectName(QStringLiteral("label_timing"));
        label_timing->setGeometry(QRect(10, 240, 43, 16));
        label_maxtiming = new QLabel(centralWidget);
        label_maxtiming->setObjectName(QStringLiteral("label_maxtiming"));
        label_maxtiming->setGeometry(QRect(210, 240, 16, 16));
        label_status = new QLabel(centralWidget);
        label_status->setObjectName(QStringLiteral("label_status"));
        label_status->setGeometry(QRect(10, 330, 47, 16));
        label_Max = new QLabel(centralWidget);
        label_Max->setObjectName(QStringLiteral("label_Max"));
        label_Max->setGeometry(QRect(160, 160, 20, 16));
        label_min = new QLabel(centralWidget);
        label_min->setObjectName(QStringLiteral("label_min"));
        label_min->setGeometry(QRect(160, 90, 16, 16));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 40, 211, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_connect = new QPushButton(layoutWidget);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));

        horizontalLayout->addWidget(pushButton_connect);

        pushButton_desconnect = new QPushButton(layoutWidget);
        pushButton_desconnect->setObjectName(QStringLiteral("pushButton_desconnect"));

        horizontalLayout->addWidget(pushButton_desconnect);

        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(9, 285, 221, 25));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_start = new QPushButton(layoutWidget1);
        pushButton_start->setObjectName(QStringLiteral("pushButton_start"));

        horizontalLayout_2->addWidget(pushButton_start);

        pushButton_stop = new QPushButton(layoutWidget1);
        pushButton_stop->setObjectName(QStringLiteral("pushButton_stop"));

        horizontalLayout_2->addWidget(pushButton_stop);

        textEdit_IP = new QTextEdit(centralWidget);
        textEdit_IP->setObjectName(QStringLiteral("textEdit_IP"));
        textEdit_IP->setGeometry(QRect(20, 10, 211, 21));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit_IP->sizePolicy().hasHeightForWidth());
        textEdit_IP->setSizePolicy(sizePolicy);
        textEdit_IP->setAcceptDrops(true);
        textEdit_IP->setAutoFillBackground(false);
        textBrowser_dados = new QTextBrowser(centralWidget);
        textBrowser_dados->setObjectName(QStringLiteral("textBrowser_dados"));
        textBrowser_dados->setGeometry(QRect(255, 11, 291, 331));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 564, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_minimo, SIGNAL(valueChanged(int)), lcdNumber_minimo, SLOT(display(int)));
        QObject::connect(horizontalSlider_maximo, SIGNAL(valueChanged(int)), lcdNumber_maximo, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_timing->setText(QApplication::translate("MainWindow", "Timing(s)", 0));
        label_maxtiming->setText(QApplication::translate("MainWindow", "1", 0));
        label_status->setText(QApplication::translate("MainWindow", "TextLabel", 0));
        label_Max->setText(QApplication::translate("MainWindow", "Max", 0));
        label_min->setText(QApplication::translate("MainWindow", "Min", 0));
        pushButton_connect->setText(QApplication::translate("MainWindow", "Connect", 0));
        pushButton_desconnect->setText(QApplication::translate("MainWindow", "Desconnect", 0));
        pushButton_start->setText(QApplication::translate("MainWindow", "Start", 0));
        pushButton_stop->setText(QApplication::translate("MainWindow", "Stop", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
