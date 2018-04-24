#ifndef POLIGONO_H
#define POLIGONO_H
#include "ponto.h"

/**
 * @brief The Poligono class É uma classe que representa um polígono
 */
class Poligono: public Ponto
{
private:
    /**
     * @brief pol
     * Array que gardará os vértices do polígono
     */
    Ponto *pol;
    /**
     * @brief qtevertices
     * variável que conta a quantidade de vértices que o polígono tem
     */
    int qtevertices;
public:
    /**
     * @brief Poligono
     * Construtor que aloca o array com no máximo 100 vértices
     */
    Poligono();

    ~Poligono();
    /**
     * @brief setqtevertices
     * Método que permite alterar o valor da variável qtevertices
     * @param a
     * Valor que será gardado na variável qtevertices
     */
    void setqtevertices(int a);
    /**
     * @brief inserirvertice
     * Método que adiciona um vértice no polígono
     * @param a
     * Coordenada x do vértice
     * @param b
     * Coordenada y do vértice
     */
    void inserirvertice(float a,float b);
    /**
     * @brief getquantvertices
     * Método que acessa o conteúdo da variável qtevertices
     * @return
     * Retorna a quantidade de vértices
     */
    int getquantvertices();
    /**
     * @brief area
     * Calcula a área do polígono pelo método shoelace
     * @return
     * Retorna a área do polígono
     */
    float area();
    /**
     * @brief transladapol
     * Adiciona um dado valor ás coordenadas 'x' e 'y' de cada vértice do polígono
     * @param a
     * Valor que será adicionado na coordenada x
     * @param b
     * Valor que será adicionado na coordenada y
     */
    void transladapol(float a, float b);
    /**
     * @brief rotpol
     * Rotaciona o polígono em um dado valor em graus
     * @param graus
     * Ângulo que o polígono será rotacionado
     * @param a
     * Coordenada x do centro de massa do polígono
     * @param b
     * Coordenada y do centro de massa do polígono
     */
    void rotpol(float graus, float a, float b);
    /**
     * @brief imprimepol
     * Imprime em tela todos os vértices do polígono em questão
     */
    void imprimepol() const;
};

#endif // POLIGONO_H
