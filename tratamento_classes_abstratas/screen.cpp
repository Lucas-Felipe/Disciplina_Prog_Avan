#include "screen.h"
#include <string>
#include <iostream>
#include <fstream>

using namespace std;

Screen::Screen()
{
    nlin=0;
    ncol=0;
}

void Screen::setnlim(int _nlin)
{
    nlin=_nlin;
}

void Screen::setncol(int _ncol)
{
    ncol=_ncol;
}

void Screen::alocamat(int _nlin, int _ncol)
{
    nlin=_nlin;
    ncol=_ncol;

    mat.resize(_nlin);
    for(int i=0;i<_nlin;i++)
    {
        mat[i].resize(_ncol);
    }

    for(int i=0;i<_nlin;i++)
    {
        for(int j=0;j<_ncol;j++)
        {
            mat[i][j]=' ';
        }
    }
}

int Screen::getnlin()
{
    return mat.size();
}

int Screen::getncol()
{
    return mat[0].size();
}

void Screen::setPixel(int x, int y)
{
    mat[x][y]=brush;
}

void Screen::clear()
{
    for(int i=0;i<nlin;i++)
    {
        for(int j=0;j<ncol;j++)
        {
            mat[i][j]=' ';
        }
    }
}

void Screen::setBrush(char _brush)
{
    brush=_brush;
}

void Screen::salvafigura()
{
    ofstream arquivo;

    arquivo.open("C:/Users/LucasFelipe/Documents/tratamento_classes_abstratas/arquivosalvo.txt");
    //arquivo.open("C:/Users/C6-PROF/Desktop/tratamento_classes_abstratas/arquivosalvo.txt");

    if(arquivo.is_open())
    {
        for(int i=0;i<nlin;i++)
        {
            for(int j=0;j<ncol;j++)
            {
                arquivo<<mat[i][j]<<' ';
            }
            arquivo<<"\n";
        }
        arquivo.close();
    }else
        cout<<"Erro ao abrir arquivo para salvar!"<<endl;
}

ostream& operator<<(ostream &os, Screen &t)
{

    for(int i=0;i<t.getnlin();i++)
    {
        for(int j=0;j<t.getncol();j++)
        {
            os<<t.mat[i][j]<<' ';
        }
        os<<endl;
    }
}

int Sinal(int x){
    if(x == 0)
        return 0;
    else if(x > 0)
        return 1;
    else
        return -1;
}

void desenhareta(int x1, int y1, int x2, int y2, Screen &t){
     int x,y,Delta_x,Delta_y,s1,s2,Temp,Troca,new_e;

     x = x1;
     y = y1;
     Delta_x = abs(x2 - x1);
     Delta_y = abs(y2 - y1);
     s1=Sinal(x2 - x1);
     s2=Sinal(y2 - y1);
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

void desenharetangulo(Ponto p,int largura,int altura,Screen &t,bool _fillmolde)
{
    if(_fillmolde)
    {
        for(int i=p.getx();i<p.getx()+altura;i++)
        {
            for(int j=p.gety();j<p.gety()+largura;j++)
            {
                t.setPixel(i,j);
            }
        }
    }
    else
    {
        for(int i=p.getx();i<p.getx()+altura;i++)
        {
            for(int j=p.gety();j<p.gety()+largura;j++)
            {
                if(i==p.getx() || i==p.getx()+altura-1){
                    t.setPixel(i,j);
                }
                if(j==p.gety() || j==p.gety()+largura-1)
                {
                    t.setPixel(i,j);
                }
            }
        }
    }
}

void desenhacirculo(int _x,int _y,int radius, Screen &t,bool _fillmolde)
{
    int x = _x;
    int y = _y+radius;
    int d = 1 - radius;
    t.setPixel(x,y);
    t.setPixel(x+radius,y-radius);
    t.setPixel(x,y-(2*radius));
    t.setPixel(x-radius,y-radius);
    while(y > x) {
        if (d < 0)
            d += 2 * x + 3;
        else {
            d += 2 * (x - y) + 5;
            y--;
        }
    x++;
    t.setPixel(x,-y+(2*_y));
    t.setPixel(-x+(2*_y),y);
    t.setPixel(-x+(2*_y),-y+(2*_y));
    t.setPixel(x,y);
    }
    if(_fillmolde)
    {
        for(int i=(_x-radius);i<=(_x+radius);i++){
            for(int j=(_y-radius);j<=(_y+radius);j++){
                if( (i-_x)*(i-_x)+(j-_y)*(j-_y) <= (radius*radius)){
                    t.setPixel(i,j);
                }
            }
        }
    }

}
