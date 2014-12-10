#include "rules.h"
#include "ui_rules.h"

Rules::Rules(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Rules)
{
    ui->setupUi(this);
    connect(ui->backButton, &QPushButton::clicked, this, &Rules::backButtonClicked);
    //ui->textEdit->setAttribute(Qt::WA_TranslucentBackground, true);
}

Rules::~Rules()
{
    delete ui;
}

void Rules::backButtonClicked()
{
    close();
    emit backToMenu();
}
void Rules::paintEvent(QPaintEvent *)
{
    QImage fontImage(":/new/prefix1/Images/dirtymoney.jpg");
    QPainter painter(this);
    painter.drawImage(0, 0, fontImage.scaled(this->size()));
}
