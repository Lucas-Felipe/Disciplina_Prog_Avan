#-------------------------------------------------
#
# Project created by QtCreator 2018-06-01T07:48:53
#
#-------------------------------------------------

QT       += core gui
QT       += network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ConsumidorDeDados
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    plotter.cpp

HEADERS  += mainwindow.h \
    plotter.h

FORMS    += mainwindow.ui
