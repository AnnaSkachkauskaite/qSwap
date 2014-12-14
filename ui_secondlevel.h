/********************************************************************************
** Form generated from reading UI file 'secondlevel.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDLEVEL_H
#define UI_SECONDLEVEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondLevel
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLineEdit *bestScore;
    QLabel *label_4;
    QLineEdit *score;
    QVBoxLayout *verticalLayout_2;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SecondLevel)
    {
        if (SecondLevel->objectName().isEmpty())
            SecondLevel->setObjectName(QStringLiteral("SecondLevel"));
        SecondLevel->resize(800, 600);
        centralwidget = new QWidget(SecondLevel);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout_6 = new QGridLayout(centralwidget);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));

        gridLayout_6->addLayout(gridLayout_3, 1, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setPointSize(26);
        font.setBold(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_2->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_2);

        bestScore = new QLineEdit(centralwidget);
        bestScore->setObjectName(QStringLiteral("bestScore"));
        bestScore->setReadOnly(true);

        verticalLayout->addWidget(bestScore);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font);
        label_4->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(label_4);

        score = new QLineEdit(centralwidget);
        score->setObjectName(QStringLiteral("score"));
        score->setReadOnly(true);

        verticalLayout->addWidget(score);


        gridLayout_6->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout_2->addWidget(backButton);


        gridLayout_6->addLayout(verticalLayout_2, 0, 0, 1, 1);

        SecondLevel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondLevel);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        SecondLevel->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondLevel);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SecondLevel->setStatusBar(statusbar);

        retranslateUi(SecondLevel);

        QMetaObject::connectSlotsByName(SecondLevel);
    } // setupUi

    void retranslateUi(QMainWindow *SecondLevel)
    {
        SecondLevel->setWindowTitle(QApplication::translate("SecondLevel", "MainWindow", 0));
        label_2->setText(QApplication::translate("SecondLevel", "BestScore:", 0));
        label_4->setText(QApplication::translate("SecondLevel", "Score:", 0));
        backButton->setText(QApplication::translate("SecondLevel", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class SecondLevel: public Ui_SecondLevel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDLEVEL_H
