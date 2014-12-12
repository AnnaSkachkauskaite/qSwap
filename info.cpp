#include "info.h"
#include "ui_info.h"

Info::Info(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Info)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &Info::backButtonClicked);
}

Info::~Info()
{
    delete ui;
}

void Info::backButtonClicked()
{
    close();
    emit backToMenu();
}
void Info::paintEvent(QPaintEvent *)
{
    QImage fontImage(":/new/prefix1/Images/dirtymoney.jpg");
    QPainter painter(this);
    painter.drawImage(0, 0, fontImage.scaled(this->size()));
}
