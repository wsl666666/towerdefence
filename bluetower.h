#ifndef BLUETOWER_H
#define BLUETOWER_H

#include "tower.h"
#include "bullets/bluebullet.h"

class BlueTower : public Tower
{
public:
    BlueTower(QPointF towerPosition);

    virtual void enemyTargeted(Enemy *aimEnemy);
};

#endif // BLUETOWER_H
