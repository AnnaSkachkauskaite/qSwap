#include "mainwindow.h"
#include "game.h"
#include <QApplication>
#include <QMap>
#include <QPair>
#include <QString>
#include <QtDebug>
#include "mainmenu.h"
//#include "database.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*MainWindow w;
    w.show();*/
    MainMenu w;
    w.show();
    /*Game game;
    for (int i = 0; i < 8; ++i)
    {
        //for (int j = 0; j < 8; ++j)
          //  printf("%d ", game.getPiece(i, j));
        //printf(/n);
    }
    game.isMovePossible();
    DataBase *db;
    db = new DataBase;
    QMap<QString, QString>* results;
    results = db->loadDb();
    results->insert("name", "4");
    qDebug() << results->value("name");
    db->makeDb(results);
    QMap<QString, QString>* newval;
    newval = db->loadDb();
    qDebug() << newval->value("name");*/
    return a.exec();
}
