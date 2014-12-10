/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_4;
    QPushButton *playButton;
    QSpacerItem *verticalSpacer;
    QPushButton *optionsButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *rulesButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *infoButton;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(508, 440);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Menu->sizePolicy().hasHeightForWidth());
        Menu->setSizePolicy(sizePolicy);
        Menu->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        gridLayout = new QGridLayout(Menu);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 3, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("DokChampa"));
        font.setPointSize(72);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer_4 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_4);

        playButton = new QPushButton(Menu);
        playButton->setObjectName(QStringLiteral("playButton"));
        sizePolicy.setHeightForWidth(playButton->sizePolicy().hasHeightForWidth());
        playButton->setSizePolicy(sizePolicy);
        playButton->setStyleSheet(QStringLiteral("background-color: rgb(0,134,139);"));

        verticalLayout->addWidget(playButton);

        verticalSpacer = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        optionsButton = new QPushButton(Menu);
        optionsButton->setObjectName(QStringLiteral("optionsButton"));
        optionsButton->setStyleSheet(QStringLiteral("background-color: rgb(58,95,205);"));

        verticalLayout->addWidget(optionsButton);

        verticalSpacer_2 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        rulesButton = new QPushButton(Menu);
        rulesButton->setObjectName(QStringLiteral("rulesButton"));
        rulesButton->setStyleSheet(QStringLiteral("background-color: rgb(84,255,159);"));

        verticalLayout->addWidget(rulesButton);

        verticalSpacer_3 = new QSpacerItem(20, 60, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        infoButton = new QPushButton(Menu);
        infoButton->setObjectName(QStringLiteral("infoButton"));
        infoButton->setStyleSheet(QStringLiteral("background-color: rgb(135,206,255);"));

        verticalLayout->addWidget(infoButton);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Dialog", 0));
        label->setText(QApplication::translate("Menu", "qSWAG", 0));
        playButton->setText(QApplication::translate("Menu", "Play", 0));
        optionsButton->setText(QApplication::translate("Menu", "Options", 0));
        rulesButton->setText(QApplication::translate("Menu", "Rules", 0));
        infoButton->setText(QApplication::translate("Menu", "Info", 0));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
