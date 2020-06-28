#include "interfaceonbottom.h"

#include "game.h"
extern Game * game;

InterfaceOnBottom::InterfaceOnBottom()
{
    gridLayout->setMargin(0);
    gridLayout->setSpacing(0);
    gridLayout->setRowMinimumHeight(1, this->height()/8);
    gridLayout->setColumnMinimumWidth(4, 200);

    setLayout(gridLayout);
    gridLayout->addWidget(buttonStartGame, 0, 4, 2, 1, Qt::AlignHCenter);
    connect(buttonStartGame, SIGNAL(clicked()), game->map->getNewLevelEnemies(), SLOT(startNewLevel()));

    updateMoney();
    updateHp();
}

void InterfaceOnBottom::updateMoney()
{
    Money->setText(QString::number(game->money));
}

void InterfaceOnBottom::updateHp()
{
    HP->setText(QString::number(game->hp));
}
