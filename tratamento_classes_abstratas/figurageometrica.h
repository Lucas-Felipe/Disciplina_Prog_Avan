#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"
#include "ponto.h"
#include <vector>

class Figurageometrica
{
protected:
    vector<Ponto> p;
public:

    Figurageometrica();

    virtual void draw(Screen &t)=0;

};

#endif // FIGURAGEOMETRICA_H
