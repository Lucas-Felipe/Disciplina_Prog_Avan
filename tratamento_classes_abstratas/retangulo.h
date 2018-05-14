#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo:public Figurageometrica
{
private:
    float largura,altura;
    bool fillmolde;
public:
    Retangulo(Ponto _p1, int largura, int altura, bool _fillmolde);
    void setfillmolde(bool _fillmolde);
    void setlargura(int _largura);
    void setaltura(int _altura);
    int getlargura();
    int getaltura();
    void draw(Screen &t);
};

#endif // RETANGULO_H
