#ifndef SCREEN_H
#define SCREEN_H
#include <vector>
#include <ostream>
#include"ponto.h"

using namespace std;

class Screen
{
private:
  int nlin, ncol;
  char brush;
  vector< vector<char> > mat;

public:
  Screen();

  void setnlim(int _nlin);
  void setncol(int _ncol);
  void alocamat(int _nlin, int _ncol);
  int getnlin();
  int getncol();
  void setPixel(int x, int y);
  void clear();
  void setBrush(char _brush);
  void salvafigura();

  friend ostream& operator<<(ostream &os, Screen &t);
  friend void desenhareta(int x1, int y1, int x2, int y2,Screen &t);
  friend void desenharetangulo(Ponto p,int largura,int altura,Screen &t,bool _fillmolde);
  friend void desenhacirculo(int _x,int _y,int radius, Screen &t,bool _fillmolde);
};

#endif // SCREEN_H
