#-------------------------------------------------
#
# Project created by QtCreator 2016-12-20T10:47:35
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = final
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp \
    about.cpp \
    components1.cpp \
    components2.cpp \
    help.cpp

HEADERS  += mainwindow.h \
    dialog.h \
    about.h \
    components1.h \
    components2.h \
    help.h

FORMS    += mainwindow.ui \
    dialog.ui \
    about.ui \
    components1.ui \
    components2.ui \
    help.ui

RESOURCES += \
    resources.qrc
