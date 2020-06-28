#ifndef PLAYER_H
#define PLAYER_H
#include <game.h>
#include <QObject>

class Player : public QObject
{
    Q_OBJECT
private:

public:
    Player();
    static int hp,money;
    void updateUpgradeAndBuyButtons();
    void checkIfPlayerIsDead();
    void endGame();
    void resetPlayer();

public slots:
};

#endif // PLAYER_H
