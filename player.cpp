#include "player.h"

#include "game.h"
extern Game * game;

Player::Player()
{

}
void Player::updateUpgradeAndBuyButtons()
{
    game->interfaceOnBottom->updateMoney();
    game->interfaceOnTheRightSide->getInterfaceWithTowerOptions()->updateButtons();
}
void Player::checkIfPlayerIsDead()
{
    if (game->hp < 0)
        endGame();
}

void Player::endGame()
{
    game->interfaceOnBottom->setButtonStartGameEnabled(false);
    game->interfaceOnTheRightSide->setWidget(3);
}

void Player::resetPlayer()
{
    game = new Game();
}
