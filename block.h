#ifndef block_H
#define block_H

#include <QGraphicsRectItem>
#include <QPointF>
#include <QPolygonF>
#include <QTimer>
#include <QtMath>
#include <QtDebug>

#include "towers/tower.h"

class block : public QGraphicsRectItem
{
private:
    const int xpos, ypos;

    QBrush brush = QBrush(Qt::black, Qt::SolidPattern);
    QPen pen = QPen(Qt::cyan);
    Tower * tower = nullptr;
    bool isPath = false;

    void mousePressEvent(QGraphicsSceneMouseEvent * event);
    void hoverEnterEvent(QGraphicsSceneHoverEvent * event);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent * event)
    {
        if (isPath)
            changeblockBrushColor(Qt::white);
        else
            changeblockBrushColor(Qt::black);
    }

    void changeOpacityBasedOnblockAndTower(qreal opacity, bool checkTower);

public:
    block (int x, int y);

    int getxpos() const { return xpos; }
    int getypos() const { return ypos; }
    Tower * getTower() const { return tower; }
    unsigned int getTowerAttackRange() const { return tower->getAttackRange(); }

    bool hasPath() const { return isPath; }

    void setTower(Tower * t) { tower = t; }
    void setPath(bool path) { isPath = path; }
    void changeOpacity(qreal opacity) { setOpacity(opacity); }

    void changeblockBrushColor(Qt::GlobalColor color);

    void resetblock();
};

#endif // block_H
