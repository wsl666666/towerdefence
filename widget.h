#ifndef WIDGET_H
#define WIDGET_H
#include <QGraphicsScene>
#include <QGraphicsView>
class Widget : public QWidget
{
    Q_OBJECT
private:
    QGraphicsScene * scene = new QGraphicsScene();
    QGraphicsView * view = new QGraphicsView(scene);
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
};
#endif // WIDGET_H
