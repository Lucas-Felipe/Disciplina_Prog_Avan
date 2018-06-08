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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <plotter.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label_IPdoServ;
    QLineEdit *lineEdit_IPdoServ;
    QListWidget *listWidget_IPs;
    QPushButton *pushButton_update;
    QLabel *label_timing;
    QSlider *horizontalSlider_timing;
    QLabel *label_timingmax;
    plotter *widget_grafico;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_desconnect;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_start;
    QPushButton *pushButton_stop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(518, 390);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label_IPdoServ = new QLabel(centralWidget);
        label_IPdoServ->setObjectName(QStringLiteral("label_IPdoServ"));
        label_IPdoServ->setGeometry(QRect(20, 10, 81, 16));
        lineEdit_IPdoServ = new QLineEdit(centralWidget);
        lineEdit_IPdoServ->setObjectName(QStringLiteral("lineEdit_IPdoServ"));
        lineEdit_IPdoServ->setGeometry(QRect(20, 30, 171, 20));
        listWidget_IPs = new QListWidget(centralWidget);
        listWidget_IPs->setObjectName(QStringLiteral("listWidget_IPs"));
        listWidget_IPs->setGeometry(QRect(20, 110, 171, 121));
        pushButton_update = new QPushButton(centralWidget);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setGeometry(QRect(120, 240, 75, 23));
        label_timing = new QLabel(centralWidget);
        label_timing->setObjectName(QStringLiteral("label_timing"));
        label_timing->setGeometry(QRect(20, 250, 47, 13));
        horizontalSlider_timing = new QSlider(centralWidget);
        horizontalSlider_timing->setObjectName(QStringLiteral("horizontalSlider_timing"));
        horizontalSlider_timing->setGeometry(QRect(20, 270, 160, 19));
        horizontalSlider_timing->setOrientation(Qt::Horizontal);
        label_timingmax = new QLabel(centralWidget);
        label_timingmax->setObjectName(QStringLiteral("label_timingmax"));
        label_timingmax->setGeometry(QRect(190, 270, 16, 16));
        widget_grafico = new plotter(centralWidget);
        widget_grafico->setObjectName(QStringLiteral("widget_grafico"));
        widget_grafico->setGeometry(QRect(210, 10, 291, 321));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 60, 171, 25));
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
        layoutWidget1->setGeometry(QRect(20, 300, 171, 25));
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

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 518, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_IPdoServ->setText(QApplication::translate("MainWindow", "IP do Servidor", 0));
        pushButton_update->setText(QApplication::translate("MainWindow", "Update", 0));
        label_timing->setText(QApplication::translate("MainWindow", "Timing", 0));
        label_timingmax->setText(QApplication::translate("MainWindow", "1", 0));
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
