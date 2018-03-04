#include "rect.h"
#include<QPainter>

rect::rect(QWidget *parent) :
    QWidget(parent)
{
}

void rect::paintEvent(QPaintEvent *event)
{
    int i,j;
    QPainter painter(this);
    QPixmap pngBlockDouble("E:/demos/qt/demo1/clicked.ico");
    QPixmap pngBlockNone("E:/demos/qt/demo1/non.ico");

    pngBlockDouble=pngBlockDouble.scaled(QSize(35,35));
    pngBlockNone=pngBlockNone.scaled(QSize(35,35));

//    painter.drawPixmap(20,20,pngBlockDouble);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            painter.drawPixmap(i*35,j*35,pngBlockNone);
        }
    }
      painter.drawPixmap(35*7,35*7,pngBlockDouble);

}
