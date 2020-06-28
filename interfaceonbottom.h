#ifndef INTERFACEONBOTTOM_H
#define INTERFACEONBOTTOM_H

#include <QWidget>
#include <QGridLayout>
#include <QPushButton>
#include <QLabel>

class InterfaceOnBottom : public QWidget
{
    Q_OBJECT
private:
    QGridLayout * gridLayout = new QGridLayout(this);

    QLabel * textMoney = new QLabel("Money:");
    QLabel * Money = new QLabel;
    QLabel * textHP = new QLabel("HP:");
    QLabel * HP = new QLabel;

    QPushButton * buttonStartGame = new QPushButton("Start game");

public:
    InterfaceOnBottom();

    void setButtonStartGameEnabled(bool enabled) { buttonStartGame->setEnabled(enabled); }

public slots:
    void updateMoney();
    void updateHp();
};

#endif // INTERFACEONBOTTOM_H
