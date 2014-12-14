/********************************************************************************
** Form generated from reading UI file 'levelmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEVELMENU_H
#define UI_LEVELMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_levelMenu
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_4;
    QSpacerItem *verticalSpacer;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *simpleLevel;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *backButton;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QLabel *label_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *levelMenu)
    {
        if (levelMenu->objectName().isEmpty())
            levelMenu->setObjectName(QStringLiteral("levelMenu"));
        levelMenu->resize(918, 619);
        centralwidget = new QWidget(levelMenu);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 5, 4, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QFont font;
        font.setFamily(QStringLiteral("Tahoma"));
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 0, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 5, 1, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_2->sizePolicy().hasHeightForWidth());
        pushButton_2->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(14);
        pushButton_2->setFont(font1);
        pushButton_2->setStyleSheet(QStringLiteral("background-color: rgb(84,255,159);"));

        gridLayout->addWidget(pushButton_2, 6, 1, 1, 1);

        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        sizePolicy.setHeightForWidth(pushButton_3->sizePolicy().hasHeightForWidth());
        pushButton_3->setSizePolicy(sizePolicy);
        pushButton_3->setFont(font1);
        pushButton_3->setStyleSheet(QStringLiteral("background-color: rgb(58,95,205);"));

        gridLayout->addWidget(pushButton_3, 2, 3, 1, 1);

        simpleLevel = new QPushButton(centralwidget);
        simpleLevel->setObjectName(QStringLiteral("simpleLevel"));
        sizePolicy.setHeightForWidth(simpleLevel->sizePolicy().hasHeightForWidth());
        simpleLevel->setSizePolicy(sizePolicy);
        simpleLevel->setFont(font1);
        simpleLevel->setStyleSheet(QStringLiteral("background-color: rgb(0,134,139);"));

        gridLayout->addWidget(simpleLevel, 2, 1, 1, 1);

        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        sizePolicy.setHeightForWidth(pushButton_4->sizePolicy().hasHeightForWidth());
        pushButton_4->setSizePolicy(sizePolicy);
        pushButton_4->setFont(font1);
        pushButton_4->setStyleSheet(QStringLiteral("background-color: rgb(135,206,255);"));

        gridLayout->addWidget(pushButton_4, 6, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 0, 1, 1);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setStyleSheet(QStringLiteral("background-color:rgb(50,205,50);"));

        gridLayout->addWidget(backButton, 7, 4, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 7, 2, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFlat(true);

        gridLayout->addWidget(pushButton, 7, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);
        label_3->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        levelMenu->setCentralWidget(centralwidget);
        menubar = new QMenuBar(levelMenu);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 918, 26));
        levelMenu->setMenuBar(menubar);
        statusbar = new QStatusBar(levelMenu);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        levelMenu->setStatusBar(statusbar);

        retranslateUi(levelMenu);

        QMetaObject::connectSlotsByName(levelMenu);
    } // setupUi

    void retranslateUi(QMainWindow *levelMenu)
    {
        levelMenu->setWindowTitle(QApplication::translate("levelMenu", "MainWindow", 0));
        label_4->setText(QApplication::translate("levelMenu", "And", 0));
        pushButton_2->setText(QApplication::translate("levelMenu", "3", 0));
        pushButton_3->setText(QApplication::translate("levelMenu", "2", 0));
        simpleLevel->setText(QApplication::translate("levelMenu", "1", 0));
        pushButton_4->setText(QApplication::translate("levelMenu", "4", 0));
        backButton->setText(QApplication::translate("levelMenu", "Back", 0));
        label->setText(QApplication::translate("levelMenu", "Level", 0));
        label_2->setText(QApplication::translate("levelMenu", " Play! ", 0));
        pushButton->setText(QString());
        label_3->setText(QApplication::translate("levelMenu", "Push", 0));
    } // retranslateUi

};

namespace Ui {
    class levelMenu: public Ui_levelMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEVELMENU_H
