#-------------------------------------------------
#
# Project created by QtCreator 2014-11-19T19:54:03
#
#-------------------------------------------------

QT       += core gui
QT       += multimedia
QT       += xml

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = project
TEMPLATE = app
CONFIG += c++11


SOURCES += main.cpp\
        mainwindow.cpp \
    game.cpp \
    optionsmenu.cpp \
    mainmenu.cpp \
    rules.cpp \
    database.cpp

HEADERS  += mainwindow.h \
    game.h \
    optionsmenu.h \
    mainmenu.h \
    rules.h \
    database.h

FORMS    += mainwindow.ui \
    optionsmenu.ui \
    mainmenu.ui \
    rules.ui

RESOURCES += \
    swag.qrc
