#ifndef RETA_H
#define RETA_H
#include "figurageometrica.h"

/**
 * @brief The Reta class
 * Classe para representar uma reta
 */
class Reta:public Figurageometrica
{
public:
    /**
     * @brief Reta
     * Construtor da classe reta que inicia com valores passados por parâmetro
     * @param p1
     * Ponto onde começa a reta
     * @param p2
     * Ponto onde termina a reta
     */
    Reta(Ponto p1, Ponto p2);
    /**
     * @brief draw
     * Função virtual para desenhar uma reta quando chamado
     * @param t
     * Matriz onde será desenhado a reta
     */
    void draw(Screen &t);
};

#endif // RETA_H
