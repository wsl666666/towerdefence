#ifndef TOWER_H
#define TOWER_H

#include <QObject>
#include <QVector>

#include "towers_prices.h"
#include "bullets/bullet.h"
#include "towerrangeattack.h"
#include "enemy.h"

class block;

class Tower : public QObject
{
    Q_OBJECT
private:
    const Qt::GlobalColor towerColor;
    const QPointF towerPosition;

    unsigned int attackRange;
    block * parentblock;
    TowerRangeAttack * towerRangeAttack;

    void createNewTowerSquare();

protected:
    short currentLevel = 1;
    QVector<unsigned int> vectorDamage;


    void setBulletPosAndAddToScene(Bullet * bullet);

public:
    Tower(unsigned int range, Qt::GlobalColor color, QPointF towerPosition_);

    Qt::GlobalColor getTowerColor() { return towerColor; }
    unsigned int getAttackRange() const { return attackRange; }
    block * getParentblock() { return parentblock; }
    short getCurrentLevel() { return currentLevel; }
    unsigned int getDamage() { return vectorDamage[currentLevel-1]; }
    unsigned int getPrice(unsigned short vectorTowerPrices_NR) { return VECTOR_TOWER_PRICES[vectorTowerPrices_NR][currentLevel]; }
    TowerRangeAttack * getTowerRangeAttack() { return towerRangeAttack; }

    void setParentblock(block * h) { parentblock = h; }
    void setTowerRangeAttackVisibility(bool visible) { towerRangeAttack->setVisible(visible); }

    virtual void enemyTargeted(Enemy *e) = 0;

    void resetTower();

public slots:
    void increaseLevelAndReducePlayerMoney(unsigned short vectorTowerPrices_NR);
    void increaseLevel() { currentLevel++; }
};

#endif // TOWER_H
