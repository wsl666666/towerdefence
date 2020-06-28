#include "block.h"
#include "game.h"
#include <QGraphicsRectItem>
#include <QObject>
#include <QBrush>
#include <QLineF>
#include <QPen>
#include <QTimer>
#include <QtMath>
extern Game * game;
block::block(int x_, int y_)
    : xpos(x_), ypos(y_)
{
    setRect(0, 0, 40, 40);
    setAcceptHoverEvents(true);
    setBrush(brush);
    setPen(pen);
}

void block::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    game->map->blockWasClicked(this);

    if (tower)
        tower->setTowerRangeAttackVisibility(true);
}

void block::hoverEnterEvent(QGraphicsSceneHoverEvent *event)
{
    changeblockBrushColor(Qt::green);
}



void block::changeblockBrushColor(Qt::GlobalColor color)
{
    brush.setColor(color);
    setBrush(brush);
}

void block::resetblock()
{
    tower = nullptr;
}
