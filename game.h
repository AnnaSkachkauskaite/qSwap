#pragma once

#include <QTime>

const int maxSize = 20;
const int twoInRowSize = 6;
const int twoThroughOneSize = 2;

///Class for game logic
class Game
{
public:
    Game();
    void setSize();
    ///Piece type
    int getPiece(int, int);
    ///Find lines on game field
    bool lookForMatches();
    ///Big method for finding and removing matches on game field
    void findAndRemoveMatches();
    ///True if player can make one more move
    bool isMovePossible();
    ///Change pieces
    void swapPieces(QPair<int, int> first, QPair<int, int> second);
    QString scoreAtTheMoment();
    void getNullScore();
    void mixButtons();

private:
    ///Affect after removal lines
    void dropPieces(int col, int row);
    void addPiece(int col, int row);
    ///For all free places after drop pieses
    void addNewPieces();
    bool matchType(int col, int row, int type);
    bool matchPattern(int col, int row, QPair<int, int> needToMatch, QPair<int, int> possibilities[], int arraySize);
    QList<QPair<int, int>> getMatchHoriz(int row, int col);
    QList<QPair<int, int>> getMatchVert (int col, int row);
    int score;
    ///Field size
    int sizeG;
    int matrix[maxSize][maxSize];
    ///List of lines
    QList<QList<QPair<int, int>>> matches;

    ///Match patterns
    QPair<int,int> horizTwoInRow[twoInRowSize] = {qMakePair(-2,0), qMakePair(-1,-1), qMakePair(-1,1), qMakePair(2,-1), qMakePair(2,1), qMakePair(3,0)};
    QPair<int,int> horizTwoThroughOne[twoThroughOneSize] = {qMakePair(1,-1), qMakePair(1,1)};
    QPair<int,int> verticTwoInRow[twoInRowSize] = {qMakePair(0,-2), qMakePair(-1,-1), qMakePair(1,-1), qMakePair(-1,2), qMakePair(1,2), qMakePair(0,3)};
    QPair<int,int> verticTwoThroughOne[twoThroughOneSize] = {qMakePair(-1,1), qMakePair(1,1)};
};


