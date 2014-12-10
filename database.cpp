#include "database.h"

const QPair<QString, QString> nullPair = QPair<QString, QString>(QString("0"),QString("0"));

DataBase::DataBase()
{
}

/*QString DataBase::getResult(QString name)
{

    bool isFind = false;

    QDomDocument doc("document");
    QFile file("db.xml");
    file.open(QIODevice::ReadOnly);
    doc.setContent(&file);
    file.close();

    QDomElement docElem = doc.documentElement();
    QDomNode node = docElem.firstChild();

    while(!node.isNull())
    {
        QDomNode smallNode = node.firstChild();
        while(!smallNode.isNull())
        {
            QDomElement element = smallNode.toElement();
            if (element.tagName() == name)
                isFind = true;
            if (element.tagName() == "result" && isFind)
                return element.text();
            smallNode = smallNode.nextSibling();
        }
        node = node.nextSibling();
    }
    return 0;
}*/

void DataBase::makeDb(QMap<QString, QString> *scores)
{
    QFile file("db.xml");
    file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);

    QMap<QString, QString>::iterator i;

    out << "<HighScores>" << endl;

        for (i = scores->begin(); i != scores->end(); ++i)
        {
            out << "<result>" << endl;
            out << "<level>" << i.key() << "</level>" << endl;
            out << "<score>" << i.value() << "</score>" << endl;
            out << "</result>" << endl;


        }
    out << "</HighScores>" << endl;
    file.close();
}

QPair<QString, QString> DataBase::getOneScore(QDomNode docElem)
{
    if(docElem.isNull())
        return nullPair;
    QDomNode node = docElem.firstChild();

    QPair<QString, QString> result;

    while(!node.isNull())
    {
        QDomElement element = node.toElement();
        if (element.tagName() == "level")
            result.first = element.text();
        if (element.tagName() == "keystring")
            result.second = element.text();
        node = node.nextSibling();
    }
    return result;
}

QMap<QString, QString>* DataBase::loadDb()
{
    QMap<QString, QString>* result = new QMap<QString, QString>;
    QDomDocument doc("document");
    QFile file("db.xml");
    file.open(QIODevice::ReadOnly);
    doc.setContent(&file);
    file.close();

    QDomElement docElem = doc.documentElement();

    QDomNode node = docElem.firstChild();

    while(!node.isNull())
    {
        QPair<QString, QString> score = getOneScore(node);
        result->insert(score.first, score.second);
        node = node.nextSibling();

    }
    return result;
}
