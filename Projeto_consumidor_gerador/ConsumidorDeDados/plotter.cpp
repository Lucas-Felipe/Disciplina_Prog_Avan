#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QDebug>

plotter::plotter(QWidget *parent) : QWidget(parent)
{
    for(int i=0; i<30;i++){
        datatime.push_back(i);
        data.push_back(i);
    }
}

void plotter::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    double x1,y1,x2,y2;
    
    painter.setRenderHint(QPainter::Antialiasing);

    //define a cor e tipo do preenchimento do fundo da tela
    brush.setColor(QColor(255,255,51));
    brush.setStyle(Qt::SolidPattern);

    //define a cor da borda da tela
    pen.setColor(QColor(255,0,0));

    //define a largura da borda
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);

    painter.drawRect(0,0,width(),height());

    //define a cor das linhas da tela
    pen.setColor(QColor(0,0,255));
    painter.setPen(pen);

    x1 = datatime[0]*width();
    y1 = data[0]*(height()-data[0]);

    for(int i=1; i<30; i++){
        x2=datatime[i]*width();
        y2=data[i]*(height()-data[i]);
        painter.drawLine(x1,y1,x2,y2);
        x1 = x2;
        y1 = y2;
    }

}

void plotter::plotGrafico(vector<double> &t, vector<double> &v)
{
    datatime=t;
    data=v;
    repaint();
}
