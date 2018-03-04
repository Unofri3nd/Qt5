#ifndef RECT_H
#define RECT_H

#include <QWidget>

class rect : public QWidget
{
    Q_OBJECT
public:
    rect(QWidget *parent = 0);
    void paintEvent(QPaintEvent *event);

signals:

public slots:

};

#endif // RECT_H
