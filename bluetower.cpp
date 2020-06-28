#include "bluetower.h"

BlueTower::BlueTower(QPointF towerPosition)
    : Tower(2, Qt::blue, towerPosition)
{
    vectorDamage = { 1, 20, 30, 40, 50 };
}

void BlueTower::enemyTargeted(Enemy *aimEnemy)
{
    BlueBullet * bullet = new BlueBullet(aimEnemy, vectorDamage[currentLevel-1]);
    setBulletPosAndAddToScene(bullet);
}
