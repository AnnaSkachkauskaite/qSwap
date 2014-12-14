#pragma once

#include <QMainWindow>
#include <QPainter>
#include "mainwindow.h"
#include "secondlevel.h"

namespace Ui {
class levelMenu;
}

class levelMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit levelMenu(QWidget *parent = 0);
    ~levelMenu();
    void paintEvent(QPaintEvent *);


private:
    Ui::levelMenu *ui;
    MainWindow *simpleGameField;
    SecondLevel *secondLevelField;
    //void showLevelMenu();

signals:
    //void backToMenu();

private slots:
    void backButtonClicked();
    void secondButtonClicked();
    void simpleLevelButtonClicked();
};


