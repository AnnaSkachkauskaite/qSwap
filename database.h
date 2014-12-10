#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QtXml>
#include <QFile>
#include <QMap>
#include <QPair>

class DataBase
{
public:

    DataBase();
    void makeDb(QMap<QString, QString> *scores);
    //QString getResult(QString name);
    ///First is level name, second is score
    QMap<QString, QString>* loadDb();
private:
    QPair<QString, QString> getOneScore(QDomNode docElem);


};

#endif // DATABASE_H
