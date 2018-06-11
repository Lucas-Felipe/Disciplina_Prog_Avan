#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <cmath>
#include <QDebug>

plotter::plotter(QWidget *parent) : QWidget(parent)
{

}

/**
 * @brief Plotter::paintEvent Realiza o desenho da tela
 * @param event
 */
void plotter::paintEvent(QPaintEvent *event)
{
    /**
     * @brief painter
     */
    QPainter painter(this);

    /**
     * @brief brush
     */
    QBrush brush;

    /**
     * @brief pen
     */
    QPen pen;

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

}

/**
 * @brief Plotter::plotGrafico Realiza a plotagem do gráfico
 * @param t
 * @param v
 */

void plotter::plotGrafico(vector<qint64> &t, vector<int> &v)
{
    double x = t.max_size();

    double y = v.max_size();
    vector<double> t1;
    vector<double> v1;
    QPainter painter(this);
    QPen pen;

    t1.resize(30);
    v1.resize(30);

    for (int i = 0;i<30;i++)
    {
        t1[i]=0;
        v1[i]=0;
    }

    pen.setStyle(Qt::SolidLine);

    pen.setWidth(2);

    pen.setColor(QColor(0,0,255));
    painter.setPen(pen);

    for(int i;i<t.size();i++)
        t1[i]=t[i]/x*width();
    for(int j;j<v.size();j++)
        v1[j]=v[j]/y*(height()/2);

     int x1,x2,y1,y2;


     //define as posições iniciais
     x1=t1[0];
     y1=v1[0];
     qDebug() <<"x1:" <<t1[0];
     qDebug() <<"y1: " <<v1[0];

     //desenha várias retas na tela de forma a desenhar o gráfico
     for(int i=1;i<t1.size();i++)
     {
         x2=t1[i];
         y2=v[i]; //valor a ser alterado
         x1=x2;
         y1=y2;
         qDebug() << "valores" ;

         qDebug() << x2 ;
         qDebug() << y2;
         qDebug() << x1;
         qDebug() << y1;
         painter.drawLine(x1,y1,x2,y2);
     }
     painter.drawRect(0,height()/2,width(),height());

     repaint();
}
