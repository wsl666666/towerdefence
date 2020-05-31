#ifndef BLOCKMAP_H
#define BLOCKMAP_H

#include <QBrush>
#include <QColor>
#include <QGraphicsItem>
#include <QPen>
class blockmap : public QGraphicsRectItem
{
private:
    const int x, y;
    QBrush brush = QBrush(Qt::gray, Qt::SolidPattern);
    QPen pen = QPen(Qt::black);
    bool enemyroad = false;
    void changecolor(Qt::GlobalColor color);
    void setroad(int x,int y);
    void hoverEnterEvent(QGraphicsSceneHoverEvent *);
    void hoverLeaveEvent(QGraphicsSceneHoverEvent *);
public:
    blockmap(int x,int y);
    QVector<QVector<blockmap*>>placeofblock;
    blockmap * getblock(int x, int y) { return placeofblock[y][x]; }
    void changeenemyroad(bool x) { enemyroad = x; };
};

#endif // BLOCKMAP_H
