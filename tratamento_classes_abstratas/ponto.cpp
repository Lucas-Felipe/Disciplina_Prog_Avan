#include "ponto.h"

Ponto::Ponto(int _x, int _y)
{
    x=_x;
    y=_y;
}

int Ponto::getx()
{
    return x;
}

void Ponto::setx(int _x)
{
    x=_x;
}

int Ponto::gety()
{
    return y;
}

void Ponto::sety(int _y)
{
    y=_y;
}
