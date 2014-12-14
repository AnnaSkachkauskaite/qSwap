/********************************************************************************
** Form generated from reading UI file 'info.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_H
#define UI_INFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Info
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_2;
    QTextEdit *textEdit;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Info)
    {
        if (Info->objectName().isEmpty())
            Info->setObjectName(QStringLiteral("Info"));
        Info->setEnabled(true);
        Info->resize(515, 577);
        centralwidget = new QWidget(Info);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 489, 465));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        textEdit = new QTextEdit(scrollAreaWidgetContents_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));
        textEdit->setReadOnly(true);

        verticalLayout_2->addWidget(textEdit);


        gridLayout_2->addLayout(verticalLayout_2, 0, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout->addWidget(scrollArea);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(backButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        Info->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Info);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 515, 26));
        Info->setMenuBar(menubar);
        statusbar = new QStatusBar(Info);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Info->setStatusBar(statusbar);

        retranslateUi(Info);

        QMetaObject::connectSlotsByName(Info);
    } // setupUi

    void retranslateUi(QMainWindow *Info)
    {
        Info->setWindowTitle(QApplication::translate("Info", "MainWindow", 0));
        textEdit->setHtml(QApplication::translate("Info", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; background-color:#ffffff;\">\320\247\321\202\320\276 \321\202\320\260\320\272\320\276\320\265 Swag?</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt; font-weight:600;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt"
                        "; background-color:#ffffff;\">\320\237\320\265\321\200\320\262\320\276\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276 \320\261\321\203\320\264\321\203\321\207\320\270 \320\277\320\276\320\275\321\217\321\202\320\270\320\265\320\274 \320\270\320\267 \321\201\320\273\321\215\320\275\320\263\320\260 \320\266\320\270\321\202\320\265\320\273\320\265\320\271 \320\277\321\200\320\270\320\263\320\276\321\200\320\276\320\264\320\276\320\262 \320\272\321\200\321\203\320\277\320\275\320\265\320\271\321\210\320\270\321\205 \320\274\320\265\320\263\320\260\320\277\320\276\320\273\320\270\321\201\320\276\320\262 \320\241\320\250\320\220, \321\201\320\265\320\263\320\276\320\264\320\275\321\217 Swag \342\200\223 \320\276\320\264\320\275\320\276 \320\270\320\267 \321\201\320\260\320\274\321\213\321\205 \320\277\320\276\320\277\321\203\320\273\321\217\321\200\320\275\321\213\321\205 \321\201\320\273\320\276\320\262 \320\262\320\276 \320\262\321\201\321\221\320\274 \320\274\320\270\321\200\320\265</span></p>\n"
""
                        "<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; background-color:#ffffff;\">Swag \342\200\223 \321\215\321\202\320\276, \320\262 \320\277\320\265\321\200\320\262\321\203\321\216 \320\276\321\207\320\265\321\200\320\265\320\264\321\214, \320\262\320\272\321\203\321\201, \302\253\320\272\321\200\321\203\321\202\320\276\320\271\302\273 \320\262\320\272\321\203\321\201 \320\262 \320\276\320\264\320\265\320\266\320\264\320\265, \320\274\321\203\320\267\321\213\320\272\320\265, \320\260\320\272\321\201\320\265\321\201\321\201\321\203\320\260\321\200\320\260\321\205, \320\277\320\276\320\262\320\265\320\264\320\265\320\275\320\270\320\270.</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; background-color:#ffffff;\">\320\232\320\260\320\272 \320\270 \320\273\321\216"
                        "\320\261\320\276\320\265 \320\272\320\276\320\274\320\274\320\265\321\200\321\207\320\265\321\201\320\272\320\270 \321\203\321\201\320\277\320\265\321\210\320\275\320\276\320\265 \320\270\320\267\320\275\320\260\321\207\320\260\320\273\321\214\320\275\320\276 \321\201\321\203\320\261\320\272\321\203\320\273\321\214\321\202\321\203\321\200\320\275\320\276\320\265 \321\202\320\265\321\207\320\265\320\275\320\270\320\265, \302\253\320\266\320\270\320\267\320\275\321\214 \320\275\320\260 \321\201\320\262\321\215\320\263\320\265\302\273 \320\277\321\200\320\265\320\264\320\277\320\276\320\273\320\260\320\263\320\260\320\265\321\202 \321\201\320\273\320\265\320\264\320\276\320\262\320\260\320\275\320\270\320\265 \321\200\321\217\320\264\321\203 \320\275\320\265\320\267\321\213\320\261\320\273\320\265\320\274\321\213\321\205 \320\277\321\200\320\260\320\262\320\270\320\273: \320\272 \320\277\321\200\320\270\320\274\320\265\321\200\321\203, \320\262\321\213 \320\277\321\200\320\276\321\201\321\202\320\276 \320\276\320"
                        "\261\321\217\320\267\320\260\320\275\321\213 \320\270\320\274\320\265\321\202\321\214 \320\262 \321\201\320\262\320\276\321\221\320\274 \320\263\320\260\321\200\320\264\320\265\321\200\320\276\320\261\320\265 \320\272\321\200\320\276\321\201\321\201\320\276\320\262\320\272\320\270 Nike Air Max \342\200\223 \320\277\321\200\320\270 \321\215\321\202\320\276\320\274 \320\275\320\265 \320\262\320\260\320\266\320\265\320\275 \320\275\320\270 \320\262\320\260\321\210 \320\277\320\276\320\273, \320\275\320\270 \321\205\320\260\321\200\320\260\320\272\321\202\320\265\321\200 \320\276\321\201\321\202\320\260\320\273\321\214\320\275\321\213\321\205 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\276\320\262 \320\276\320\264\320\265\320\266\320\264\321\213.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; background-color:#ffffff;\">\320\234\321\203\320\267\321\213\320\272\320\260 \320\262 \321\201\321\202\320\270\320\273\320\265 Swag</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; background-color:#ffffff;\">\320\225\321\201\320\273\320\270 \320\262\321\213 \320\275\320\265 \320\267\320\275\320\260\320\272\320\276\320\274\321\213 \321\201 \321\202\320\262\320\276\321\200\321\207\320\265\321\201\321\202\320\262\320\276\320\274 \320\262\320\265\320\273\320\270\320\272\320\270\321\205 \320\260\321\204\321\200\320\276\320\260\320\274\320\265\321\200\320\270\320\272\320\260\320\275\321\201\320\272\320\270\321\205 \320\277\320\276\321\215\321\202\320\276\320\262 \320\270 \320\272\320\276\320\274\320\277\320\276\320\267\320\270\321\202\320\276"
                        "\321\200\320\276\320\262, \321\202\320\276 \321\215\321\202\320\276\321\202 \320\277\321\200\320\276\320\261\320\265\320\273 \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \321\201\321\200\320\276\321\207\320\275\320\276 \320\267\320\260\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \342\200\223 \320\277\320\276\320\263\321\200\321\203\320\266\320\265\320\275\320\270\320\265 \320\262 \320\274\320\270\321\200 \321\201\320\260\320\274\321\213\321\205 \320\274\320\276\320\264\320\275\321\213\321\205 \320\274\321\203\320\267\321\213\320\272\320\260\320\273\321\214\320\275\321\213\321\205 \321\202\320\265\321\207\320\265\320\275\320\270\320\271 \320\275\320\260\321\207\320\270\320\275\320\260\321\216\321\211\320\265\320\274\321\203 \321\201\320\262\321\215\320\263\320\263\320\265\321\200\321\203 \321\201\320\273\320\265\320\264\321\203\320\265\321\202 \320\275\320\260\321\207\320\260\321\202\321\214 \321\201\320\276 \321\201\320\262\320\276\320\265\320\276\320\261\321\200"
                        "\320\260\320\267\320\275\320\276\320\263\320\276 \320\263\320\270\320\274\320\275\320\260 Swagga Like Us, \320\270\321\201\320\277\320\276\320\273\320\275\320\265\320\275\320\275\320\276\320\263\320\276 \320\272\320\276\320\274\320\277\320\260\320\275\320\270\320\265\320\271 \320\270\320\267 \321\201\321\202\320\276\320\273\320\277\320\276\320\262 \321\207\321\221\321\200\320\275\320\276\320\271 \320\274\321\203\320\267\321\213\320\272\320\270 \342\200\223 Jay-Z, Kanye West, Lil Wayne, T.I.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; background-color:#ffffff;\">\320\234\320\260\320\275\320\265\321\200\320\260 \320\264\320\265\321\200\320\266\320\260\321\202\321\214"
                        "\321\201\321\217</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; background-color:#ffffff;\">\320\232\320\260\320\272 \320\267\320\260\321\217\320\262\320\273\321\217\320\265\321\202 \320\260\320\262\321\202\320\276\321\200\320\270\321\202\320\265\321\202\320\275\321\213\320\271 \320\277\320\265\321\200\320\265\320\262\320\276\320\264\321\207\320\270\320\272 \321\201\320\273\320\265\320\275\320\263\320\276\320\262\321\213\321\205 \321\201\320\273\320\276\320\262\320\265\321\207\320\265\320\272 urbandictionary, \320\276\320\264\320\275\320\276 \320\270\320\267 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\271 \321\201\320\273\320\276\320\262\320\260 Swag \342\200\223 \302\253\320\277\320\276\320\275\321\202\321\213\302\273. \320\243\320\262\320\265\321\200\320\265\320\275\320\275\320\260\321\217 \320\277\320\276\321\205\320\276\320\264\320\272\320\260 \302\253\320"
                        "\276\321\202 \320\261\320\265\320\264\321\200\320\260\302\273, \320\277\320\276\321\201\320\265\321\211\320\265\320\275\320\270\320\265 \320\277\321\200\320\260\320\262\320\270\320\273\321\214\320\275\321\213\321\205 \321\200\320\265\321\201\321\203\321\200\321\201\320\276\320\262 \320\262 \321\201\320\265\321\202\320\270, \320\277\320\276\320\264\320\272\320\276\320\262\320\260\320\275\320\275\320\276\321\201\321\202\321\214 \320\262 \321\201\320\273\320\265\320\275\320\263\320\265 \320\270, \320\262 \320\270\320\264\320\265\320\260\320\273\320\265, \320\274\320\260\320\271\320\261\320\260\321\205 \320\277\320\276\321\201\320\273\321\203\320\266\320\260\321\202 \320\262\320\260\321\210\320\265\320\274\321\203 \321\203\321\201\320\277\320\265\321\205\321\203.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:18pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px;"
                        " margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600; background-color:#ffffff;\">\320\236\320\264\320\265\320\266\320\264\320\260 \320\270 \320\260\320\272\321\201\320\265\321\201\321\201\321\203\320\260\321\200\321\213 \321\201\321\202\320\270\320\273\321\217 Swag</span></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; background-color:#ffffff;\">\320\222\321\201\321\221 \320\262\321\213\321\210\320\265\320\276\320\277\320\270\321\201\320\260\320\275\320\275\320\276\320\265 \320\275\320\265 \320\270\320\274\320\265\320\265\321\202 \321\201\320\274\321\213\321\201\320\273\320\260, \320\265\321\201\320\273\320\270 \320\262\321\213 \320\275\320\265\320\264\320\276\321\201\321\202\320\260\321\202\320\276\321\207\320\275\320\276 \320\272\321\200\321\203\321\202\320\276 \320\262\321\213\320\263\320\273"
                        "\321\217\320\264\320\270\321\202\320\265 \342\200\223 \320\275\320\260\321\201\321\202\320\276\321\217\321\211\320\270\320\271 \321\204\320\260\320\275\320\260\321\202 Odd Future \320\276\320\261\321\217\320\267\320\260\321\202\320\265\320\273\321\214\320\275\320\276 \320\270\320\274\320\265\320\265\321\202 \321\205\320\276\321\202\321\217 \320\261\321\213 \320\276\320\264\320\275\321\203 \320\262\320\265\321\211\321\214 \320\276\321\202 Supreme \342\200\223 \320\277\320\276\320\266\320\260\320\273\321\203\320\271, \321\201\320\260\320\274\320\276\320\263\320\276 \321\201\320\262\321\215\320\263\320\263\320\265\321\200\321\201\320\272\320\276\320\263\320\276 \320\261\321\200\320\265\320\275\320\264\320\260 \320\277\321\200\320\276\321\210\320\265\320\264\321\210\320\270\321\205 \320\264\320\262\321\203\321\205 \320\273\320\265\321\202.</span></p>\n"
"<p align=\"justify\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; "
                        "font-size:18pt;\"><br /></p>\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; background-color:#ffffff;\">\320\220 \321\202\320\265\320\277\320\265\321\200\321\214, \321\207\321\202\320\276\320\261\321\213 \320\277\320\276\320\273\320\275\320\276\321\201\321\202\321\214\321\216 \320\277\320\276\321\201\321\202\320\270\321\207\321\214 \320\272\321\203\320\273\321\214\321\202\321\203\321\200\321\203 SWAG \320\275\320\265\320\276\320\261\321\205\320\276\320\264\320\270\320\274\320\276 \321\201\321\213\320\263\321\200\320\260\321\202\321\214 \320\262 \320\275\320\260\321\210\321\203 \320\270\320\263\321\200\321\203 \320\242\321\200\320\270 \320\222 \320\240\321\217\320\264!<br />\320\222\320\260\321\210\320\270 \320\223\320\260\320\273\320\270\320\275\320\260 \320\270 \320\220\320\275\320\275\320\260</span></p></body></html>", 0));
        backButton->setText(QApplication::translate("Info", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class Info: public Ui_Info {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_H
