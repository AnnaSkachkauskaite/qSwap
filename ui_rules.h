/********************************************************************************
** Form generated from reading UI file 'rules.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RULES_H
#define UI_RULES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Rules
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QPushButton *backButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Rules)
    {
        if (Rules->objectName().isEmpty())
            Rules->setObjectName(QStringLiteral("Rules"));
        Rules->resize(338, 410);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Rules->sizePolicy().hasHeightForWidth());
        Rules->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(Rules);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setEnabled(false);
        textEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(textEdit);

        backButton = new QPushButton(centralwidget);
        backButton->setObjectName(QStringLiteral("backButton"));
        backButton->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(backButton);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        Rules->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Rules);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 338, 26));
        Rules->setMenuBar(menubar);
        statusbar = new QStatusBar(Rules);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        Rules->setStatusBar(statusbar);

        retranslateUi(Rules);

        QMetaObject::connectSlotsByName(Rules);
    } // setupUi

    void retranslateUi(QMainWindow *Rules)
    {
        Rules->setWindowTitle(QApplication::translate("Rules", "MainWindow", 0));
        textEdit->setHtml(QApplication::translate("Rules", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:7.8pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"justify\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Verdana,Arial,sans-serif'; font-size:18pt; color:#333333; background-color:#f9f9f9;\">\320\222 \320\270\320\263\321\200\320\260\321\205 \320\266\320\260\320\275\321\200\320\260 \321\202\321\200\320\270 \320\262 \321\200\321\217\320\264 \320\270\320\263\321\200\320\276\320\272\321\203 \320\277\321\200\320\265\320\264\321\201\321\202\320\276\320\270\321\202 \321\201\320\276\321\201\321\202\320\260\320\262\320\273\321\217\321\202\321\214 \320\272\320\276\320\274\320\261\320\270\320\275\320\260\321\206\320\270\320"
                        "\270 \320\275\320\260 \320\270\320\263\321\200\320\276\320\262\320\276\320\274 \320\277\320\276\320\273\320\265 \320\270\320\267 \321\202\321\200\320\265\321\205 \320\270 \320\261\320\276\320\273\320\265\320\265 \320\276\320\264\320\270\320\275\320\260\320\272\320\276\320\262\321\213\321\205 \321\204\320\270\321\210\320\265\320\272. \320\222 \320\275\320\260\321\207\320\260\320\273\320\265 \320\270\320\263\321\200\321\213 match 3 \320\262\321\201\321\221 \320\277\320\276\320\273\320\265 \320\267\320\260\320\277\320\276\320\273\320\275\321\217\320\265\321\202\321\201\321\217 \321\204\320\270\321\210\320\272\320\260\320\274\320\270 \321\200\320\260\320\267\320\275\321\213\321\205 \321\206\320\262\320\265\321\202\320\276\320\262 \320\262 \321\201\320\273\321\203\321\207\320\260\320\271\320\275\320\276\320\274 \320\277\320\276\321\200\321\217\320\264\320\272\320\265, \320\260 \320\270\320\263\321\200\320\276\320\272 \320\274\320\265\320\275\321\217\320\265\321\202 \320\274\320\265\321\201\321\202\320\260\320\274\320"
                        "\270 \321\204\320\270\321\210\320\272\320\270, \320\275\320\260\321\205\320\276\320\264\321\217\321\211\320\270\320\265\321\201\321\217 \320\262 \321\201\320\276\321\201\320\265\320\264\320\275\320\270\321\205 \320\272\320\273\320\265\321\202\320\272\320\260\321\205. \320\225\321\201\320\273\320\270 \320\262 \321\200\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202\320\265 \321\202\320\260\320\272\320\276\320\263\320\276 \320\277\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\321\217 \320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\273\321\201\321\217 \321\200\321\217\320\264 \320\270\320\267 \321\202\321\200\320\265\321\205 \320\270 \320\261\320\276\320\273\320\265\320\265 \320\276\320\264\320\270\320\275\320\260\320\272\320\276\320\262\321\213\321\205 \321\204\320\270\321\210\320\265\320\272, \321\202\320\276 \320\276\320\275\320\270 \321\203\320\275\320\270\321\207\321\202\320\276\320\266\320\260\321\216\321\202\321\201\321\217, \320\260 \320\262\320"
                        "\274\320\265\321\201\321\202\320\276 \320\275\320\270\321\205 \320\277\320\276\321\217\320\262\320\273\321\217\321\216\321\202\321\201\321\217 \320\275\320\276\320\262\321\213\320\265.</span></p></body></html>", 0));
        backButton->setText(QApplication::translate("Rules", "Back", 0));
    } // retranslateUi

};

namespace Ui {
    class Rules: public Ui_Rules {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RULES_H
