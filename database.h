#ifndef DATABASE_H
#define DATABASE_H

#include <QString>
#include <QtXml>
#include <QFile>
#include <QMap>
#include <QPair>


///For best results at each level
class DataBase
{
public:

    DataBase();
    ///Make database from QMap
    void makeDb(QMap<QString, QString> *scores);
    //QString getResult(QString name);
    ///First QString is level name, second is score
    QMap<QString, QString>* loadDb();
private:
    ///Get best result of one level
    QPair<QString, QString> getOneScore(QDomNode docElem);


};

#endif // DATABASE_H
