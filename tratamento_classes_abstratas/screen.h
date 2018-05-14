#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <ostream>
#include"ponto.h"

using namespace std;

/**
 * @brief The Screen class
 * Classe para representar uma tela onde será desenhada as figuras geométrica
 */
class Screen
{
private:
    /**
   * @brief nlin
   * Número de linhas que a tela terá
   */
  int nlin;
  /**
   * @brief ncol
   * Número de colunas que a tela terá
   */
  int ncol;
  /**
   * @brief brush
   * Valor que representará com qual caractere as figuras vão ser desenhadas
   */
  char brush;
  /**
   * @brief mat
   * Matriz que será a representação da tela
   */
  vector< vector<char> > mat;

public:
  /**
   * @brief Screen
   * Construtor padrão da classe
   */
  Screen();

  /**
   * @brief setnlim
   * Método para mudar o valor do número de linhas da tela
   * @param _nlin
   * valor que será guardado na qte de linhas da tela
   */
  void setnlim(int _nlin);
  /**
   * @brief setncol
   * Método para mudar o valor do número de colunas da tela
   * @param _ncol
   * Valor que será guardado na qte de colunas da tela
   */
  void setncol(int _ncol);
  /**
   * @brief alocamat
   * Método que aloca o tamanho da tela
   * @param _nlin
   * Número de linhas que a tela terá
   * @param _ncol
   * Número de colunas que a tela terá
   */
  void alocamat(int _nlin, int _ncol);
  /**
   * @brief getnlin
   * Método que retorna a quantidade de linhas da tela
   * @return
   * Retorna um inteiro que é o número de linhas da tela
   */
  int getnlin();
  /**
   * @brief getncol
   * Método que retorna a quantidade de colunas da tela
   * @return
   * Retorna um inteiro que é o número de linhas da tela
   */
  int getncol();
  /**
   * @brief setPixel
   * Método que muda o "pixel" com o valor do 'brush', representado como uma coordenada de uma matriz
   * @param x
   * Coordenada x do pixel que será mudado
   * @param y
   * Coordenada y do pixel que será mudado
   */
  void setPixel(int x, int y);
  /**
   * @brief clear
   * Método que limpa a tela, muda todos o valores atuais da tela para o valor inicial
   */
  void clear();
  /**
   * @brief setBrush
   * Método que muda o caractere com qual queremos desenhar as figuras
   * @param _brush
   * Caractere que troca o pincel
   */
  void setBrush(char _brush);
  /**
   * @brief salvafigura
   * Método que salva a tela atual em um arquivo
   */
  void salvafigura();

  /**
   * @brief operator <<
   * Operador << para imprimir a tela em forma de matriz
   * @param os
   * Objeto do tipo ostream que é um fluxo de saída
   * @param t
   * Tela onde os desenhos foram escritos
   * @return
   * Retorna um objeto do tipo ostream que é um fluxo de saída
   */
  friend ostream& operator<<(ostream &os, Screen &t);
  /**
   * @brief desenhareta
   * Método que altera as coordenadas da tela com o "pincel" usando o algoritmo de Bresenham para desenhar retas
   * @param x1
   * Coordenada x do ponto inicial
   * @param y1
   * Coordenada y do ponto inicial
   * @param x2
   * Coordenada x do ponto final
   * @param y2
   * Coordenada y do ponto final
   * @param t
   * Tela em que as figuras estão sendo desenhadas
   */
  friend void desenhareta(int x1, int y1, int x2, int y2,Screen &t);
  /**
   * @brief desenharetangulo
   * Método que altera as coordenadas da tela com o "pincel"
   * @param p
   * Ponto do canto superior esquerdo
   * @param largura
   * Largura do retangulo
   * @param altura
   * Altura do retangulo
   * @param t
   * Tela onde está sendo desenhado as figuras
   * @param _fillmolde
   * Variável que indica o molde
   */
  friend void desenharetangulo(Ponto p,int largura,int altura,Screen &t,bool _fillmolde);
  /**
   * @brief desenhacirculo
   * Método que altera as coordenadas da tela com o "pincel" usando o algoritmo de Bresenham para desenhar circulos
   * @param _x
   * Coordenada x do centro do circulo
   * @param _y
   * Coordenada y do centro do circulo
   * @param radius
   * Valor do raio da circunferência
   * @param t
   * Tela onde estão sendo desenhadas as figuras
   * @param _fillmolde
   * Variável que indica o molde
   */
  friend void desenhacirculo(int _x,int _y,int radius, Screen &t,bool _fillmolde);
};

#endif // SCREEN_H
