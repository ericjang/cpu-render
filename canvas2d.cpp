/*!
   @file   canvas2d.cpp
   @author evjang (eric_jang@brown.edu)
   @date   Spring 2015
*/

#include "canvas2d.h"

#include "render.h"
#include <QPainter>
#include <QResizeEvent>
#include <QDebug>


Canvas2D::Canvas2D(QWidget *parent) : QWidget(parent)
{
    m_image = NULL;
}

Canvas2D::~Canvas2D()
{
    if (m_image != NULL) delete m_image;
}

void Canvas2D::paintEvent(QPaintEvent *event) {
    if (m_image != NULL) {
        QPainter painter(this);
        painter.drawImage(QPoint(0, 0), *m_image);
    } else {
        render();
    }
}

/*! This is useful for debugging misbehaving pixels in your render */
void Canvas2D::mousePressEvent(QMouseEvent *e) {
    qDebug("pixel coord: (%d,%d)", e->x(),e->y());
}

void Canvas2D::render() {
    QSize s = size();
    qDebug() << "Image Size: " << s;
    if (m_image != NULL) delete m_image;
    m_image = new QImage(s,QImage::Format_RGB32);
    m_image->fill(Qt::blue);

    const vec2 iResolution(s.width(), s.height()); // x,y

    for (int y=0; y<s.height(); ++y) {
        for (int x=0; x<s.width(); ++x) {
            vec2 gl_FragCoord(x,y);
            vec4 p = getRGBA(iResolution, gl_FragCoord);
            QRgb color = qRgba(p.x*255,p.y*255,p.z*255,p.w);
            m_image->setPixel(x,s.height()-1-y,color);
        }
    }
}


