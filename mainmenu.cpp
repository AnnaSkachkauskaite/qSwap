#include "mainmenu.h"
#include "ui_mainmenu.h"
#include <QPainter>

MainMenu::MainMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainMenu)
{
    ui->setupUi(this);
    playFontMusic();
    connect(ui->playButton,&QPushButton::clicked, this, &MainMenu::playButtonClicked);
    connect(ui->optionsButton,&QPushButton::clicked, this, &MainMenu::optionsButtonClicked);
    connect(gameField, SIGNAL(endGame()), this, SLOT(showMenu()));
    ui->infoButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->optionsButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->playButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->rulesButton->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    ui->label->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    connect(optionsWindow, SIGNAL(backToMenu()), this, SLOT(showMenu()));
    connect(rulesField, SIGNAL(backToMenu()), this, SLOT(showMenu()));
    connect(ui->rulesButton, &QPushButton::clicked, this, &MainMenu::rulesButtonClicked);
    connect(ui->infoButton, &QPushButton::clicked, this, &MainMenu::infoButtonClicked);
}


MainMenu::~MainMenu()
{
    delete ui;
    delete gameField;
    delete optionsWindow;
}

void MainMenu::playButtonClicked()
{
    gameField = new MainWindow();
    gameField->show();
}

void MainMenu::optionsButtonClicked()
{
    optionsWindow = new OptionsMenu();
    optionsWindow->show();
}

void MainMenu::rulesButtonClicked()
{
    rulesField = new Rules();
    rulesField->show();
}

void MainMenu::infoButtonClicked()
{
    infoField = new Info;
    infoField->show();
}

void MainMenu::showMenu()
{
    show();
}

void MainMenu::paintEvent(QPaintEvent *)
{
    QImage fontImage(":/new/prefix1/Images/swagdog.jpg");
    QPainter painter(this);
    painter.drawImage(0, 0, fontImage.scaled(this->size()));
}

void MainMenu::playFontMusic()
{
player = new QMediaPlayer;
player->setMedia(QUrl::fromLocalFile("Images/backgroundmusic.mp3"));
player->setVolume(100);
player->play();
}

