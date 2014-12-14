#include "levelmenu.h"
#include "ui_levelmenu.h"

levelMenu::levelMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::levelMenu)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &levelMenu::backButtonClicked);
    connect(ui->simpleLevel, &QPushButton::clicked, this, &levelMenu::simpleLevelButtonClicked);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &levelMenu::secondButtonClicked);
    //connect(simpleGameField, SIGNAL(endGame()), this, SLOT(showLevelMenu()));
}

levelMenu::~levelMenu()
{
    delete ui;
}

void levelMenu::backButtonClicked()
{
    close();
   // emit backToMenu();
}

void levelMenu::paintEvent(QPaintEvent *)
{
    QImage fontImage(":/new/prefix1/Images/dirtymoney.jpg");
    QPainter painter(this);
    painter.drawImage(0, 0, fontImage.scaled(this->size()));
}

void levelMenu::secondButtonClicked()
{
    secondLevelField = new SecondLevel();
    secondLevelField->show();
}

void levelMenu::simpleLevelButtonClicked()
{
    simpleGameField = new MainWindow();
    simpleGameField->show();
}

/*void levelMenu::showLevelMenu()
{
    show();
}*/
