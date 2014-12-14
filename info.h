#pragma once

#include <QMainWindow>
#include <QPainter>

namespace Ui {
class Info;
}

class Info : public QMainWindow
{
    Q_OBJECT

public:
    explicit Info(QWidget *parent = 0);
    ~Info();
    void paintEvent(QPaintEvent *);

private:
    Ui::Info *ui;

signals:
    void backToMenu();

private slots:
    void backButtonClicked();
};


