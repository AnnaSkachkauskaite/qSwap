#ifndef MAINMENU_H
#define MAINMENU_H

#include <QMainWindow>
#include "mainwindow.h"
#include "optionsmenu.h"
#include <QtMultimedia/QMediaPlayer>
#include <QDesktopWidget>
#include "rules.h"

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
    void playFontMusic();
    QMediaPlayer *player;

private slots:
    void playButtonClicked();
    void optionsButtonClicked();
    void rulesButtonClicked();

public slots:
    void showMenu();

private:
    Ui::MainMenu *ui;
    MainWindow *gameField;
    OptionsMenu *optionsWindow;
    Rules *rulesField;
};

#endif // MAINMENU_H
