#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

/**
 * @brief The Circulo class
 * Classe para representar uma circunferência ou disco
 */
class Circulo : public Figurageometrica
{
private:
    /**
     * @brief raio
     * Guarda o tamanho do raio da circunferência
     */
    int raio;
    /**
     * @brief fillmolde
     * Indica se o circulo será impresso só o contorno ou todo
     */
    bool fillmolde;
public:
    /**
     * @brief Circulo
     * Construtor da classe circulo com parâmetros iniciais
     * @param p1
     * Coordenada do centro do circulo
     * @param _raio
     * Raio do circulo
     * @param _fillmolde
     * Variável que indica o modo de impressão
     */
    Circulo(Ponto p1, int _raio, bool _fillmolde);
    /**
     * @brief draw
     * Função virtual da classe circulo
     * @param t
     * Matriz para desenhar a figura passada por parâmetro
     */
    void draw(Screen &t);
};

#endif // CIRCULO_H
