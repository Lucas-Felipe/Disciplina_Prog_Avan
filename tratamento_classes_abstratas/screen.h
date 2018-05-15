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
};

#endif // SCREEN_H
