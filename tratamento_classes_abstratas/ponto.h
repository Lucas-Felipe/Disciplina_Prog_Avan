#ifndef PONTO_H
#define PONTO_H

/**
 * @brief The Ponto class
 * Classe para representar pontos das figuras geométricas
 */
class Ponto
{
private:
    /**
     * @brief x
     * Coordenada x da classe ponto
     */
    int x;
    /**
     * @brief y
     * Coordenada y da classe ponto
     */
    int y;
public:
    /**
     * @brief Ponto
     * Construtor da classe ponto com parâmetros iniciais
     * @param _x
     * Coordenada x inicial
     * @param _y
     * Coordenada y inicial
     */
    Ponto(int _x,int _y);
    /**
     * @brief getx
     * Método para retornar o valor da coordenada x
     * @return
     * Retorna um int com o valor guardado na coordenada x
     */
    int getx();
    /**
     * @brief setx
     * Método para mudar o valor guardado na variável x
     * @param _x
     * Valor que será colocado na variável x
     */
    void setx(int _x);
    /**
     * @brief gety
     * Método para retornar o valor da coordenada y
     * @return
     * Retorna um int com o valor guardado na coordenada y
     */
    int gety();
    /**
     * @brief sety
     * Método para mudar o valor guardado na variável y
     * @param _y
     * Valor que será colocado na variável y
     */
    void sety(int _y);
};

#endif // PONTO_H
