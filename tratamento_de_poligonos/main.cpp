#include <iostream>
#include "ponto.h"
#include "poligono.h"
#include "retangulo.h"


using namespace std;

int main()
{
    Retangulo ret(0,0,3,4);

    cout<<"retangulo inicial: "<<endl;
    ret.imprimepol();
    cout<< "Area: " << ret.area() << endl << endl;

    cout<<"retangulo transladado: "<<endl;
    ret.transladapol(-3,4);
    ret.imprimepol();
    cout<<"Area transladada: "<<ret.area()<<endl<<endl;

    cout<<"retangulo rotacionado: "<<endl;
    ret.rotpol((float)30,(float)-3/2,(float)4/2);
    ret.imprimepol();
    cout<<"Area rotacionada: "<<ret.area()<<endl<<endl;

    return 0;
}
