#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

/**
 * @brief The Retangulo class
 * Classe para representar um retângulo
 */
class Retangulo:public Figurageometrica
{
private:
    /**
     * @brief largura
     * Guarda o tamanho da largura do retangulo
     */
    int largura;
    /**
     * @brief altura
     * Guarda o tamanho da altura do retangulo
     */
    int altura;
    /**
     * @brief fillmolde
     * Variável que indica se o retangulo imprime só o cortono ou cheio
     */
    bool fillmolde;
public:
    /**
     * @brief Retangulo
     * Construtuor da classe com valores inicias
     * @param _p1
     * Ponto do canto superior esquerdo do retângulo
     * @param largura
     * Valor inicial da largura
     * @param altura
     * Valor inicial da altura
     * @param _fillmolde
     * Valor inicial do molde
     */
    Retangulo(Ponto _p1, int largura, int altura, bool _fillmolde);
    /**
     * @brief setfillmolde
     * Método para mudar o valor do molde
     * @param _fillmolde
     * Parâmetro que irá trocar o valor do molde
     */
    void setfillmolde(bool _fillmolde);
    /**
     * @brief setlargura
     * Método para mudar o valor da largura
     * @param _largura
     * Valor que irá ser guardado na variável largura
     */
    void setlargura(int _largura);
    /**
     * @brief setaltura
     * Método para mudar o valor da altura
     * @param _altura
     * Valor que irá ser guardado na variável altura
     */
    void setaltura(int _altura);
    /**
     * @brief getlargura
     * Método que retorna o valor guardado na variável largura
     * @return
     * Retorna um inteiro com o valor da altura do retangulo
     */
    int getlargura();
    /**
     * @brief getaltura
     * Método que retorna o valor guardado na variável altura
     * @return
     * Retorna um inteiro com o valor da altura do retangulo
     */
    int getaltura();
    /**
     * @brief draw
     * Função virtual que irá ser chamada quando desenhar o retangulo
     * @param t
     * Matriz onde será desenhado o retangulo
     */
    void draw(Screen &t);
};

#endif // RETANGULO_H
