#ifndef RULES_H
#define RULES_H

#include <QMainWindow>
#include <QPainter>

namespace Ui {
class Rules;
}

class Rules : public QMainWindow
{
    Q_OBJECT

public:
    explicit Rules(QWidget *parent = 0);
    ~Rules();
    void paintEvent(QPaintEvent *);

signals:
    void backToMenu();

private:
    Ui::Rules *ui;

private slots:
    void backButtonClicked();
};

#endif // RULES_H
