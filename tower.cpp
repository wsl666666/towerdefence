#include "tower.h"

#include "game.h"
extern Game * game;

Tower::Tower(unsigned int range, Qt::GlobalColor color, QPointF towerPosition_)
    : towerColor(color), towerPosition(towerPosition_), attackRange(range)
{
    towerRangeAttack = new TowerRangeAttack(range, towerPosition);
    game->map->getScene()->addItem(towerRangeAttack);
}

void Tower::setBulletPosAndAddToScene(Bullet *bullet)
{
    bullet->setPos(towerPosition.x() + 40/2 - 10/2,
                   towerPosition.y() + 40/2 - 10/2);
    game->map->getScene()->addItem(bullet);
}

void Tower::increaseLevelAndReducePlayerMoney(unsigned short vectorTowerPrices_NR)
{
    game->money-=getPrice(vectorTowerPrices_NR);
    currentLevel++;
}


