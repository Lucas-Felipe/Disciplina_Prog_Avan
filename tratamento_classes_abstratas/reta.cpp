#include "reta.h"
#include <iostream>
#include <vector>

using namespace std;

Reta::Reta(Ponto p1,Ponto p2)
{
    p.push_back(p1);
    p.push_back(p2);
}

void Reta::draw(Screen &t)
{
    cout<<t;
}
