#include "poligono.h"
#include <iostream>
#include <cmath>

using namespace std;

Poligono::Poligono()
{
    pol= new Ponto[100];
    qtevertices=0;
}

Poligono::~Poligono()
{
    delete [] pol;
}

void Poligono::inserirvertice(float a,float b)
{
    pol[qtevertices].setX(a);
    pol[qtevertices].setY(b);
    qtevertices++;
}

int Poligono::getquantvertices()
{
    return qtevertices;
}

float Poligono::area()
{
    float acumulo1=0,acumulo2=0;

    for(int i=0;i<qtevertices;i++)
    {
        if(i==(qtevertices-1))
            acumulo1=acumulo1+(pol[i].getX()*pol[0].getY());
        else
            acumulo1=acumulo1+(pol[i].getX()*pol[i+1].getY());
    }

    for(int i=0;i<qtevertices;i++)
    {
        if(i==(qtevertices-1))
            acumulo2=acumulo2+(pol[i].getY()*pol[0].getX());
        else
            acumulo2=acumulo2+(pol[i].getY()*pol[i+1].getX());
    }

    if(acumulo1>acumulo2)
        return (float)(acumulo1-acumulo2)/2.0;
    else
        return (float)(acumulo2-acumulo1)/2.0;
}

void Poligono::transladapol(float a, float b)
{
    for(int i=0;i<qtevertices;i++)
    {
        pol[i].setX(pol[i].getX()+a);
        pol[i].setY(pol[i].getY()+b);
    }
}

void Poligono::rotpol(float graus,float a,float b)
{
    float acumulo;
    float cx=0,cy=0;
    transladapol((-1)*a,(-1)*b);

    graus=graus*(M_PI/180);

    for(int i=0;i<qtevertices;i++)
    {
        acumulo=0;
        cx=pol[i].getX();
        cy=pol[i].getY();

        acumulo=acumulo+((cx*cos(graus)));
        acumulo=acumulo-(cy*(sin(graus)));
        pol[i].setX(acumulo);

        acumulo=0;
        acumulo=acumulo+((cx*sin(graus)));
        acumulo=acumulo+((cy*(cos(graus))));
        pol[i].setY(acumulo);
    }

    transladapol(a,b);
}


void Poligono::imprimepol() const
{
    for(int i=0;i<qtevertices;i++)
    {
        pol[i].imprime();
        cout<<" -> ";
    }
    cout<<endl<<endl;
}
