#include "retangulo.h"
#include <iostream>

using namespace std;

Retangulo::Retangulo(Ponto _p1, int largura, int altura, bool _fillmolde)
{
    setaltura(altura);
    setlargura(largura);
    setfillmolde(_fillmolde);
    Ponto p2(_p1.getx(),_p1.gety()); //sentido anti-horario
    p.push_back(p2);

    p2.sety(p2.gety()-altura);
    p.push_back(p2);
    p2.setx(p2.getx()+largura);
    p.push_back(p2);
    p2.sety(p2.gety()+altura);
    p.push_back(p2);
}

void Retangulo::setfillmolde(bool _fillmolde)
{
    fillmolde=_fillmolde;
}

void Retangulo::setlargura(int _largura)
{
    largura=_largura;
}

void Retangulo::setaltura(int _altura)
{
    altura=_altura;
}

int Retangulo::getlargura()
{
    return largura;
}

int Retangulo::getaltura()
{
    return altura;
}

void Retangulo::draw(Screen &t)
{

    cout<<t;
}
