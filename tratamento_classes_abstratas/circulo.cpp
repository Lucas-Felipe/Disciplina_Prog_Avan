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
    int x = p[0].getx();
    int y = p[0].gety()+raio;
    int d = 1 - raio;
    t.setPixel(x,y);
    t.setPixel(x+raio,y-raio);
    t.setPixel(x,y-(2*raio));
    t.setPixel(x-raio,y-raio);
    while(y > x) {
        if (d < 0)
            d += 2 * x + 3;
        else {
            d += 2 * (x - y) + 5;
            y--;
        }
    x++;
    t.setPixel(x,-y+(2*p[0].gety()));
    t.setPixel(-x+(2*p[0].gety()),y);
    t.setPixel(-x+(2*p[0].gety()),-y+(2*p[0].gety()));
    t.setPixel(x,y);
    }
    if(fillmolde)
    {
        for(int i=(p[0].getx()-raio);i<=(p[0].getx()+raio);i++){
            for(int j=(p[0].gety()-raio);j<=(p[0].gety()+raio);j++){
                if( (i-p[0].getx())*(i-p[0].getx())+(j-p[0].gety())*(j-p[0].gety()) <= (raio*raio)){
                    t.setPixel(i,j);
                }
            }
        }
    }
}
