#include "optionsmenu.h"
#include "ui_optionsmenu.h"
#include <QPainter>

OptionsMenu::OptionsMenu(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::OptionsMenu)
{
    ui->setupUi(this);
    ui->musicOnOff->setText("ON");
    ui->soundOnOff->setText("ON");
    connect(ui->pushButton, &QPushButton::clicked, this, &OptionsMenu::backToMenuClicked);
    connect(ui->musicOnOff,&QPushButton::clicked, this, &OptionsMenu::musicOnOffClicked);
    connect(ui->soundOnOff,&QPushButton::clicked, this, &OptionsMenu::soundOnOffClicked);
}

OptionsMenu::~OptionsMenu()
{
    delete ui;
}

void OptionsMenu::backToMenuClicked()
{
    close();
    emit backToMenu();
}

void OptionsMenu::musicOnOffClicked()
{
    musicOn = !musicOn;
    if (musicOn)
    {
        ui->musicOnOff->setText("ON");
    }
    else
    {
        ui->musicOnOff->setText("OFF");
    }
}

void OptionsMenu::soundOnOffClicked()
{
    soundOn = !soundOn;
    if (soundOn)
    {
        ui->soundOnOff->setText("ON");
    }
    else
    {
        ui->soundOnOff->setText("OFF");
    }
}

void OptionsMenu::paintEvent(QPaintEvent *)
{
    QImage fontImage(":/new/prefix1/Images/dirtymoney.jpg");
    QPainter painter(this);
    painter.drawImage(0, 0, fontImage.scaled(this->size()));
}
