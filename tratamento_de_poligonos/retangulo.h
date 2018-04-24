#ifndef RETANGULO_H
#define RETANGULO_H
#include "poligono.h"

/**
 * @brief The Retangulo class Representa um retângulo que é um polígono com 4 vértices apenas e seus os tamanhos de seus lados diferentes
 */
class Retangulo:public Poligono
{
private:
    /**
     * @brief largura
     * Guarda a largura do retângulo
     */
    float largura;
    /**
     * @brief altura
     * Guarda a altura do retângulo
     */
    float altura;
public:
    /**
     * @brief Retangulo
     * Construtor que recebe as coordenada do canto superior esquerdo e com a largura e a altura do retângulo, gera os 4 vértices
     * @param x
     * Coordenada 'x' do canto superior esquerdo do retângulo
     * @param y
     * Coordenada 'y' do canto superior esquerdo do retângulo
     * @param largura
     * Largura do retângulo
     * @param altura
     * Altura do retângulo
     */
    Retangulo(float x, float y, float largura, float altura);
};

#endif // RETANGULO_H
