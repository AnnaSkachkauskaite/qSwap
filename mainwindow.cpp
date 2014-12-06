#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cmath>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    size(8),
    game()

{
    ui->setupUi(this);
    firstPiece = nullptr;
    createButtons();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createButtons()
{
    for (int i = 0; i < size; ++i)
        for (int j = 0; j < size; ++j)
        {
            QPushButton *button = new QPushButton;
            button->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
            button->setText(" ");
            ui->gridLayout->addWidget(button, i, j);
            ui->centralWidget->setStyleSheet("background-color:rgb(0,0,0);");
            buttonsPosition[button] = qMakePair(i, j);
            ui->gridLayout->itemAtPosition(i, j)->widget()->setStyleSheet(colorByType(game.getPiece(i, j)));
            //button->setText(QString("%1").arg(game.getPiece(i, j)));
            connect(button, &QPushButton::clicked, this, &MainWindow::buttonClick);
        }
    bool temp = game.lookForMatches();
    while(temp){
        game.findAndRemoveMatches(); //сделать цикл
        RefreshButtons();
        temp = game.lookForMatches();
    }
}
void MainWindow::buttonClick()
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

void MainWindow::appropriateGame()
{

}

void MainWindow::makeSwap(QPushButton *first, QPushButton *second)
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
        }
    }
}

void MainWindow::swapPiecesAndButtons(QPushButton *first, QPushButton *second)
{
    QString tmp;
    tmp = first->text();
    first->setText(second->text());
    second->setText(tmp);
    game.swapPieces(buttonsPosition[first], buttonsPosition[second]);
}

void MainWindow::RefreshButtons()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            ui->gridLayout->itemAtPosition(i, j)->widget()->setStyleSheet(colorByType(game.getPiece(i,j)));
        }
    }
}

const char* MainWindow::colorByType(int type)
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
