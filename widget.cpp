#include "widget.h"
#include "blockmap.h"

#include <QBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QObject>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setStyleSheet("border: 0px");
    view->resize(800,600);
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setScene(scene);
    for (int y = 0; y < 8; y++)
        for (int x = 0; x < 10; x++)
        {
            blockmap * block = new blockmap(x,y);
            scene->addItem(block);
        }
    view->setAlignment(Qt::AlignHCenter);
    QFont font;
    font.setFamily("幼圆");
    font.setPointSize(24);
    QVBoxLayout *layout = new QVBoxLayout;
    QLabel * label = new QLabel;
    label->setText("简易塔防游戏");
    label->setAlignment(Qt::AlignHCenter);
    label->setFont(font);
    layout->addWidget(label);
    QPushButton *button1 = new QPushButton("开始");
    QPushButton *button2 = new QPushButton("结束");
    button1->setFont(font);
    button2->setFont(font);
    button2->setFlat(false);
    button1->setCheckable(true);
    layout->addWidget(button1);
    layout->addWidget(button2);
    connect(button1, SIGNAL(clicked()), view, SLOT(show()));
    connect(button1, SIGNAL(clicked()), this, SLOT(close()));
    connect(button2, SIGNAL(clicked()), this, SLOT(close()));
    this->setLayout(layout);
    this->show();
}

Widget::~Widget()
{
}

