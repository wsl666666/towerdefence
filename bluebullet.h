#ifndef BLUEBULLET_H
#define BLUEBULLET_H

#include "bullet.h"

class BlueBullet : public Bullet
{
public:
    BlueBullet(Enemy *aimEnemy, unsigned int damage);
};

#endif // BLUEBULLET_H
