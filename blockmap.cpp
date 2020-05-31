#include "blockmap.h"
#include <QGraphicsItem>
blockmap::blockmap(int x,int y) : x(x),y(y)
{
    setRect(x*60,y*60,60,60);
    setAcceptHoverEvents(true);
    setBrush(brush);
    setPen(pen);
}

void blockmap::changecolor(Qt::GlobalColor color)
{
    brush.setColor(color);
    setBrush(brush);
}
void blockmap::hoverEnterEvent(QGraphicsSceneHoverEvent *)
{
    changecolor(Qt::yellow);
}
void blockmap::hoverLeaveEvent(QGraphicsSceneHoverEvent *)
{
    if (enemyroad)
        changecolor(Qt::white);
    else
        changecolor(Qt::gray);
}
