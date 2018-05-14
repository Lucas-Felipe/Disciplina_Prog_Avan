#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

class Reta:public Figurageometrica
{
public:
    Reta(Ponto p1, Ponto p2);
    void draw(Screen &t);
};

#endif // RETA_H
