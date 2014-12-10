/********************************************************************************
** Form generated from reading UI file 'optionsmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSMENU_H
#define UI_OPTIONSMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsMenu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *musicOnOff;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *soundOnOff;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *OptionsMenu)
    {
        if (OptionsMenu->objectName().isEmpty())
            OptionsMenu->setObjectName(QStringLiteral("OptionsMenu"));
        OptionsMenu->resize(800, 600);
        OptionsMenu->setStyleSheet(QStringLiteral(""));
        centralwidget = new QWidget(OptionsMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(24);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(128, 255, 74);"));

        horizontalLayout_2->addWidget(label);

        musicOnOff = new QPushButton(centralwidget);
        musicOnOff->setObjectName(QStringLiteral("musicOnOff"));
        musicOnOff->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(musicOnOff);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(128, 255, 74);"));

        horizontalLayout_3->addWidget(label_2);

        soundOnOff = new QPushButton(centralwidget);
        soundOnOff->setObjectName(QStringLiteral("soundOnOff"));
        soundOnOff->setStyleSheet(QLatin1String("color: rgb(0, 0, 0);\n"
"background-color: rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(soundOnOff);


        verticalLayout->addLayout(horizontalLayout_3);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setStyleSheet(QStringLiteral("background-color:rgb(255,255,255);"));

        verticalLayout->addWidget(pushButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        OptionsMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(OptionsMenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        OptionsMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(OptionsMenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        OptionsMenu->setStatusBar(statusbar);

        retranslateUi(OptionsMenu);

        QMetaObject::connectSlotsByName(OptionsMenu);
    } // setupUi

    void retranslateUi(QMainWindow *OptionsMenu)
    {
        OptionsMenu->setWindowTitle(QApplication::translate("OptionsMenu", "MainWindow", 0));
        label->setText(QApplication::translate("OptionsMenu", "Music", 0));
        musicOnOff->setText(QString());
        label_2->setText(QApplication::translate("OptionsMenu", "Sounds", 0));
        soundOnOff->setText(QString());
        pushButton->setText(QApplication::translate("OptionsMenu", "Back ", 0));
    } // retranslateUi

};

namespace Ui {
    class OptionsMenu: public Ui_OptionsMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSMENU_H
