#ifndef BULLET_H
#define BULLET_H

#include <QObject>
#include <QGraphicsEllipseItem>
#include <QBrush>
#include <QPen>
#include <QTimer>

#include "enemy.h"

class Bullet : public QObject, public QGraphicsEllipseItem
{
    Q_OBJECT

private:
    const int LENGTH_OF_MOVEMENT = 15;

    Enemy * aim;
    QLineF lineFromBulletToAim;
    QTimer * timerForCheckingAim = new QTimer(this);
    unsigned int damage;

    void moveBulletTowardsAim();
    void rotateToAim();
    void updateLine();
    void checkIfBulletIsCloseEnoughAim();

private slots:
    void checkExistenceOfAim();

public:
    Bullet(Qt::GlobalColor color, Enemy *e, unsigned int damage_);
};

#endif // BULLET_H
