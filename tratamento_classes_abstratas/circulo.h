#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

class Circulo : public Figurageometrica
{
private:
    int raio;
    bool fillmolde;
public:
  Circulo(Ponto p1, int _raio, bool _fillmolde);

  void draw(Screen &t);
};

#endif // CIRCULO_H
