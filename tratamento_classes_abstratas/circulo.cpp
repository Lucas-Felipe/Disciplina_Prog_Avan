#include "circulo.h"
#include <iostream>

using namespace std;

Circulo::Circulo(Ponto p1,int _raio,bool _fillmolde)
{
    raio=_raio;
    fillmolde=_fillmolde;
    p.push_back(p1);
}

void Circulo::draw(Screen &t)
{
    cout<<t;
}
