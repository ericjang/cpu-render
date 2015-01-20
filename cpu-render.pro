#-------------------------------------------------
#
# Project created by QtCreator 2015-01-14T16:55:51
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cpu-render
TEMPLATE = app


SOURCES += main.cpp\
    canvas2d.cpp \
    mainwindow.cpp \
    render.cpp

HEADERS  += \
    canvas2d.h \
    mainwindow.h \
    render.h

INCLUDEPATH += glm/

FORMS    += \
    mainwindow.ui

