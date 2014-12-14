#pragma once

#include <QMainWindow>
#include <QPushButton>
#include <QMap>
#include <QPair>
#include <QString>
#include <string.h>

#include "game.h"
#include "database.h"

using namespace std;

namespace Ui {
class SecondLevel;
}

class SecondLevel : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondLevel(QWidget *parent = 0);
    ~SecondLevel();
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

private:
    Ui::SecondLevel *ui;
    void endGameNoMatches();
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
    QMap<QString, QString>* results;
    DataBase *db;
    QString levelName = "secondLevel";
    void resultToSave();
};

