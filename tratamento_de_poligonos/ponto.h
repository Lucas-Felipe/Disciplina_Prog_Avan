#ifndef PONTO_H
#define PONTO_H
#include <iostream>


using namespace std;
/**
 * @brief The Ponto class A classe Ponto tem como finalidade representar um ponto no espaço cartesiano de duas dimensões
 */
class Ponto
{
private:
    /**
     * @brief x
     * 'x' guarda a coordenada no eixo x do ponto
     */
    float x;
    /**
     * @brief y
     * 'y' guarda a coordenada no eixo y do ponto
     */
    float y;
public:
    /**
     * @brief Ponto
     * Construtor default da classe ponto
     */
    Ponto();
    /**
     * @brief setX
     * Tem como finalidade ter acesso a mudança dos valores da variável privada 'x'
     * @param _x
     * Valor que será guardado na variável 'x'
     */
    void setX(float _x);
    /**
     * @brief setY
     *  Tem como finalidade ter acesso a mudança dos valores da variável privada 'y'
     * @param _y
     * Valor que será guardado na variável 'y'
     */
    void setY(float _y);
    /**
     * @brief setXY
     * Tem como finalidade ter acesso a mudança dos valores das variáveis 'x' e 'y' de uma vez só
     * @param _x
     * Valor que será guardado na variável 'x'
     * @param _y
     * Valor que será guardado na variável 'y'
     */
    void setXY(float _x, float _y);
    /**
     * @brief getX
     * Tem como finalidade ter acesso ao valor guardado na variável privada 'x'
     * @return
     * Retorna o valor guardado em 'x'
     */
    float getX();
    /**
     * @brief getY
     * Tem como finalidade ter acesso ao valor guardado na variável privada 'y'
     * @return
     * Retorna o valor guardado em 'y'
     */
    float getY();

    /**
     * @brief add
     * Adiciona as coordenadas de um dado ponto com as coordenadas do ponto em questão
     * @param p1
     * Ponto que será somado
     * @return
     * Retorna o resultado da soma dos dois pontos, um ponto novo
     */
    Ponto add(Ponto p1);
    /**
     * @brief sub
     * Subtrai as coordenadas de um dado ponto com as coordenadas do ponto em questão
     * @param p1
     * Ponto que será subtraído
     * @return
     * Retorna o resultado da subtração dos dois pontos, um ponto novo
     */
    Ponto sub(Ponto p1);
    /**
     * @brief norma
     * Calcula a norma de um ponto
     * @return
     * Retorna o tamanho
     */
    float norma();
    /**
     * @brief translada
     * Translada as coordenadas do ponto em questão somando com dois valores passados
     * @param a
     * Valor que será somado à variável 'x'
     * @param b
     * Valor que será somado à variável 'y'
     */
    void translada(float a, float b);
    /**
     * @brief imprime
     * Imprime as coordenadas do ponto em tela
     */
    void imprime();
};



#endif // PONTO_H
