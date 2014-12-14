#-------------------------------------------------
#
# Project created by QtCreator 2014-11-19T19:54:03
#
#-------------------------------------------------

QT       += core gui
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
    database.cpp \
    info.cpp \
    levelmenu.cpp \
    secondlevel.cpp

HEADERS  += mainwindow.h \
    game.h \
    optionsmenu.h \
    mainmenu.h \
    rules.h \
    database.h \
    info.h \
    levelmenu.h \
    secondlevel.h

FORMS    += mainwindow.ui \
    optionsmenu.ui \
    mainmenu.ui \
    rules.ui \
    info.ui \
    levelmenu.ui \
    secondlevel.ui

RESOURCES += \
    swag.qrc

ANDROID_PACKAGE_SOURCE_DIR = $$PWD/android

OTHER_FILES += \
    android/AndroidManifest.xml
