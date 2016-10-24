#-------------------------------------------------
#
# Project created by QtCreator 2016-10-11T20:24:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = GameOne
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    box.cpp \
    factory.cpp

HEADERS  += mainwindow.h \
    worker.h \
    box.h \
    factory.h

FORMS    += mainwindow.ui
