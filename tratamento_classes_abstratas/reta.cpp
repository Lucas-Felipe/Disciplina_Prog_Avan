#include "reta.h"
#include <iostream>
#include <vector>

using namespace std;

Reta::Reta(Ponto p1,Ponto p2)
{
    p.push_back(p1);
    p.push_back(p2);
}

int Sinal(int x){
    if(x == 0)
        return 0;
    else if(x > 0)
        return 1;
    else
        return -1;
}

void Reta::draw(Screen &t)
{

    int x,y,Delta_x,Delta_y,s1,s2,Temp,Troca,new_e;

    x = p[0].getx();
    y = p[0].gety();
    Delta_x = abs(p[1].getx() - p[0].getx());
    Delta_y = abs(p[1].gety() - p[0].gety());
    s1=Sinal(p[1].getx() - p[0].getx());
    s2=Sinal(p[1].gety() - p[0].gety());
    if(Delta_y > Delta_x){
      Temp = Delta_x;
      Delta_x = Delta_y;
      Delta_y = Temp;
      Troca = 1;
    }
    else{
      Troca = 0;
    }
    new_e = 2*Delta_y - Delta_x;
    for(int i=1; i<= Delta_x; i++){
      t.setPixel(x,y);
      while (new_e >= 0){
        if(Troca == 1){
          //Muda para a proxima linha de rasterização
          x = x + s1;
        }
        else{
          y = y + s2;
        }
        new_e = new_e - 2*Delta_x;
      }

      //Permanece nesta linha de rasterização
      if(Troca == 1){
        y = y + s2;
      }
      else{
        x = x + s1;
      }
      new_e= new_e + 2*Delta_y;
    }
}

