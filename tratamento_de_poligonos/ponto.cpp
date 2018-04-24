#include "ponto.h"
#include <math.h>
#include <iostream>

using namespace std;

Ponto::Ponto()
{

}

void Ponto::setX(float _x)
{
    x=_x;
}

void Ponto::setY(float _y)
{
    y=_y;
}

void Ponto::setXY(float _x, float _y)
{
    x=_x;
    y=_y;
}

float Ponto::getX()
{
    return x;
}

float Ponto::getY()
{
    return y;
}

Ponto Ponto::add(Ponto p1)
{
    Ponto p;

    p.x=x+p1.x;
    p.y=y+p1.y;
    return p;
}

Ponto Ponto::sub(Ponto p1)
{
    Ponto p;

    p.x=x-p1.x;
    p.y=y-p1.y;
    return p;
}

float Ponto::norma()
{
    return sqrt((x*x)+(y*y));
}

void Ponto::translada(float a, float b)
{
    x=x+a;
    y=y+b;
}

void Ponto::imprime()
{
    cout<<"("<<x<<", "<<y<<")";

}
