#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "screen.h"
#include "ponto.h"
#include <vector>

/**
 * @brief The Figurageometrica class
 * Classe para representar figuras geométricas, possui um vetor que guarda vários tipos de figuras geométricas
 */
class Figurageometrica
{
protected:
    /**
     * @brief p
     * Vector de pontos para guardar os pontos importantes das figuras geométricas
     */
    vector<Ponto> p;
public:
    /**
     * @brief Figurageometrica
     * Construtor padrão da classe figuras geomátricas
     */
    Figurageometrica();
    /**
     * @brief draw
     * Função virtual pura para ser chamada dependendo da figura geométrica
     * @param t
     * Matriz para desenhar as figuras geométricas
     */
    virtual void draw(Screen &t)=0;

};

#endif // FIGURAGEOMETRICA_H
