#-------------------------------------------------
#
# Project created by QtCreator 2013-10-12T19:23:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtping2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    aboutdialog.cpp

HEADERS  += mainwindow.h \
    ping.h \
    aboutdialog.h

FORMS    += mainwindow.ui \
    aboutdialog.ui
