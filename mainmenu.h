#pragma once

#include <QMainWindow>
#include "mainwindow.h"
#include "optionsmenu.h"
//#include <QtMultimedia/QMediaPlayer>
#include <QDesktopWidget>
#include "rules.h"
#include "info.h"
#include "levelmenu.h"


namespace Ui {
class MainMenu;
}

class MainMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    ~MainMenu();
    void paintEvent(QPaintEvent *);
    //void playFontMusic();
    QMediaPlayer *player;

private slots:
    ///Show game field screen
    void playButtonClicked();
    ///Show options screen
    void optionsButtonClicked();
    ///Show rules screen
    void rulesButtonClicked();
    void infoButtonClicked();

public slots:
    void showMenu();

private:
    Ui::MainMenu *ui;
   // MainWindow *gameField;
    OptionsMenu *optionsWindow;
    Rules *rulesField;
    Info *infoField;
    levelMenu *levelMenuEx;
};


