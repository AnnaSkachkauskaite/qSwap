#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QMap>
#include <QPair>
#include <QString>
#include <string.h>

#include "game.h"
//#include "menu.h"

using namespace std;


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void makeSwap(QPushButton *, QPushButton *);
    void swapPiecesAndButtons(QPushButton *first, QPushButton *second);
    void paintEvent(QPaintEvent *);

private slots:
    ///Slot for generating buttons
    void createButtons();
    ///Slot for processing pushed button
    void buttonClick();
    ///Back to menu
    void menuButtonClicked();

signals:
    void endGame();

private:
    void appropriateGame();
    Ui::MainWindow *ui;
    QMap <QPushButton *, QPair<int, int> > buttonsPosition;
    int sizeG;
    QPushButton *firstPiece;
    QPair <int, int> firstPlace;
    ///Game logic
    Game game;
    ///Show changes
    void RefreshButtons();
    ///For color buttons
    const char* colorByType(int type);
};
