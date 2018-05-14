#ifndef PONTO_H
#define PONTO_H


class Ponto
{
private:
    int x,y;
public:
    Ponto(int _x,int _y);
    int getx();
    void setx(int _x);
    int gety();
    void sety(int _y);
};

#endif // PONTO_H
