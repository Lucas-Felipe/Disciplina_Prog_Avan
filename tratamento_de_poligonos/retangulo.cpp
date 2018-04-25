#include "retangulo.h"

Retangulo::Retangulo(float x, float y, float largura, float altura)
{
    inserirvertice(x,y);
    inserirvertice(x,y-altura);
    inserirvertice(x+largura,y-altura);
    inserirvertice(x+largura,y);
}

