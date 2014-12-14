#include "secondlevel.h"
#include "ui_secondlevel.h"
#include <cmath>
#include <QPainter>
#include <QTimer>
#include <QMessageBox>

SecondLevel::SecondLevel(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondLevel),
  sizeG(6),
  game()
{
    ui->setupUi(this);
    firstPiece = nullptr;
    results = db->loadDb();
    ui->bestScore->setText(results->value(levelName));
    ui->score->setText("0");
    game.getNullScore();
    ui->backButton->setStyleSheet("background-color:white;");
    connect(ui->backButton, &QPushButton::clicked, this, &SecondLevel::menuButtonClicked);
    createButtons();
}

SecondLevel::~SecondLevel()
{
    delete ui;
    delete db;
}

void SecondLevel::createButtons()
{
    for (int i = 0; i < sizeG; ++i)
        for (int j = 0; j < sizeG; ++j)
        {
            QPushButton *button = new QPushButton;
            button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            button->setText(" ");
            ui->gridLayout_3->addWidget(button, i, j);
            buttonsPosition[button] = qMakePair(i, j);
            ui->gridLayout_3->itemAtPosition(i, j)->widget()->setStyleSheet(colorByType(game.getPiece(i, j)));
            //button->setText(QString("%1").arg(game.getPiece(i, j)));
            button->setText("$");
            connect(button, &QPushButton::clicked, this, &SecondLevel::buttonClick);
        }
    bool temp = game.lookForMatches();
    while(temp){
        game.findAndRemoveMatches(); //сделать цикл
        RefreshButtons();
        temp = game.lookForMatches();
    }
    game.getNullScore();
    QMessageBox msgBox;
    msgBox.setText("Play until you run out of all move possibilieties!");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}

void SecondLevel::buttonClick()
{
    QPushButton *button = dynamic_cast<QPushButton *> (sender());
    int i = buttonsPosition[button].first;
    int j = buttonsPosition[button].second;
    if (firstPiece == nullptr)
    {
        firstPiece = button;
        firstPlace.first = i;
        firstPlace.second = j;
        button->setStyleSheet("background-color:rgb(238,44,44);");
    }

    else if (firstPiece == button)
    {
        button->setStyleSheet(colorByType(game.getPiece(firstPlace.first, firstPlace.second)));
        firstPiece = nullptr;
    }
    else
    {
        if (i == firstPlace.first && abs(j - firstPlace.second) == 1)
        {
            firstPiece->setStyleSheet(colorByType(game.getPiece(firstPlace.first, firstPlace.second)));
            makeSwap(firstPiece, button);
            firstPiece = nullptr;

        }
        else if (j == firstPlace.second && abs(i - firstPlace.first) == 1)
        {
            firstPiece->setStyleSheet(colorByType(game.getPiece(firstPlace.first, firstPlace.second)));
            makeSwap(firstPiece, button);
            firstPiece = nullptr;
        }
        else
        {
            firstPiece->setStyleSheet(colorByType(game.getPiece(firstPlace.first, firstPlace.second)));
            firstPiece = button;
            firstPlace.first = i;
            firstPlace.second = j;
            firstPiece->setStyleSheet("background-color:rgb(238,44,44);");
        }
    }
}

void SecondLevel::menuButtonClicked()
{
    ui->score->setText("0");
    game.getNullScore();
    close();
    //emit endGame();
}

void SecondLevel::endGameNoMatches()
{
    if (!game.isMovePossible())
    {
            QMessageBox goodNews;
            goodNews.setText
            ("No Moves Left!! Game Over!!");
            goodNews.setStandardButtons(QMessageBox::Ok);
            goodNews.setStyleSheet("background-color:rgb(0, 255, 0)");
            goodNews.exec();
            resultToSave();
            menuButtonClicked();
    }
}

void SecondLevel::makeSwap(QPushButton *first, QPushButton *second)
{
    swapPiecesAndButtons(first, second);
    bool temp = game.lookForMatches();
    if (!temp)
    {
        swapPiecesAndButtons(first, second);
    }
    else
    {
        while (temp)
        {
            game.findAndRemoveMatches();
            RefreshButtons();
            temp = game.lookForMatches();
            ui->score->setText(game.scoreAtTheMoment());
        }
        endGameNoMatches();
    }
}

void SecondLevel::swapPiecesAndButtons(QPushButton *first, QPushButton *second)
{
    QString tmp;
    tmp = first->text();
    first->setText(second->text());
    second->setText(tmp);
    game.swapPieces(buttonsPosition[first], buttonsPosition[second]);
}

void SecondLevel::RefreshButtons()
{
    for (int i = 0; i < sizeG; i++)
    {
        for (int j = 0; j < sizeG; j++)
        {
            ui->gridLayout_3->itemAtPosition(i, j)->widget()->setStyleSheet(colorByType(game.getPiece(i,j)));
        }
    }
}

const char* SecondLevel::colorByType(int type)
{
    switch (type) {
    case 0:
        return "background-color:rgb(0,134,139);";
        break;
    case 1:
        return "background-color:rgb(84,255,159);";
        break;
    case 2:
        return "background-color:rgb(135,206,255);";
        break;
    case 3:
        return "background-color:rgb(58,95,205);";
        break;
    case 4:
        return "background-color:rgb(0,206,209);";
        break;
    case 5:
        return "background-color:rgb(50,205,50);";
        break;
    default:
        return "background-color:rgb(0,0,0);";
        break;
    }
}

void SecondLevel::resultToSave()
{
    if (!results->contains(levelName))
    {
        results->insert(levelName, game.scoreAtTheMoment());
        db->makeDb(results);
    }
    else
    {
        if (results->value(levelName).toInt()< game.scoreAtTheMoment().toInt())
        {
            //results->value(levelName) = game.scoreAtTheMoment();
            results->remove(levelName);
            results->insert(levelName, game.scoreAtTheMoment());
            db->makeDb(results);
        }
    }
}

void SecondLevel::paintEvent(QPaintEvent *)
{
    QImage fontImage(":/new/prefix1/Images/dirtymoney.jpg");
    QPainter painter(this);
    painter.drawImage(0, 0, fontImage.scaled(this->size()));
}
