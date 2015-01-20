/*!
   @file   canvas2d.h
   @author evjang (eric_jang@brown.edu)
   @date   Spring 2015
*/

#ifndef CANVAS2D_H
#define CANVAS2D_H

#include <QWidget>
#include <QImage>

class Canvas2D : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas2D(QWidget *parent = 0);
    ~Canvas2D();

signals:

public slots:
    void render();

protected:
    QImage *m_image;

    virtual void paintEvent(QPaintEvent * event);
    void mousePressEvent(QMouseEvent *event);
};



#endif // CANVAS2D_H

