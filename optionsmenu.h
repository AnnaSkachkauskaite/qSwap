#ifndef OPTIONSMENU_H
#define OPTIONSMENU_H

#include <QMainWindow>
#include <QtMultimedia/QMediaPlayer>

namespace Ui {
class OptionsMenu;
}

class OptionsMenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit OptionsMenu(QWidget *parent = 0);
    ~OptionsMenu();
    bool musicOn = true;
    bool soundOn = true;
    void paintEvent(QPaintEvent *);

signals:
    void backToMenu();

private:
    Ui::OptionsMenu *ui;


private slots:
    void backToMenuClicked();
    void musicOnOffClicked();
    void soundOnOffClicked();
};

#endif // OPTIONSMENU_H
