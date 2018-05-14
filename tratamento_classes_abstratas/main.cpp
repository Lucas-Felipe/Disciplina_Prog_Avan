#include <iostream>
#include <vector>
#include "figurageometrica.h"
#include "reta.h"
#include "retangulo.h"
#include "circulo.h"
#include "ponto.h"
#include "screen.h"
#include <fstream>

using namespace std;

int main()
{
    vector<Figurageometrica*> figuras;
    ifstream fin;
    Screen matriz;
    int opcao,nl,nc;
    char b;

    cout<<"Deseja criar figuras (0) ou pegar figuras de um arquivo (1)?";
    cin>>opcao;

    switch(opcao)
    {
        case(1):
        {
            fin.open("C:/Users/LucasFelipe/Documents/tratamento_classes_abstratas/arquivodeentrada.txt");
            //fin.open("C:/Users/C6-PROF/Desktop/tratamento_classes_abstratas/arquivodeentrada.txt");
            if(!fin.is_open())
            {
                cout<<"Erro ao abrir arquivo!"<<endl;
                exit(0);
            }

            string comando;
            fin>>comando;

            if(comando=="dim")
            {

                fin>>nl>>nc;

                matriz.alocamat(nl,nc);

                fin>>comando;
            }else
            {
                cout<<"Erro na criacao da matriz! programa encerrado!"<<endl;
                exit(0);
            }

            if(comando=="brush")
            {

                fin>>b;

                matriz.setBrush(b);
                fin>>comando;
            }else
            {
                cout<<"Erro no comando brush! Atribuindo brush padrao -> (@)!"<<endl;
                matriz.setBrush('@');
            }

            if(comando=="line")
            {
                int x0,y0,x1,y1;
                fin>>x0>>y0>>x1>>y1;
                Ponto p1(x0,y0),p2(x1,y1);
                figuras.push_back(new Reta(p1,p2));
                desenhareta(p1.getx(),p1.gety(),p2.getx(),p2.gety(),matriz);
                fin>>comando;
            }else
            {
                cout<<"Erro no comando line! Reta nao criada!";
            }

            if(comando=="rectangle")
            {
                int x0,y0,largura, altura;
                bool fillmolde;
                fin>>x0>>y0>>largura>>altura>>fillmolde;
                Ponto p1(x0,y0);

                figuras.push_back(new Retangulo(p1,largura,altura,fillmolde));
                desenharetangulo(p1,largura,altura,matriz,fillmolde);

                fin>>comando;
            }else
            {
                cout<<"Erro no comando rectangle! Retangulo nao criado!"<<endl;                
            }

            if(comando=="circle")
            {
                int x0,y0,raio;
                bool fillmolde;
                fin>>x0>>y0>>raio>>fillmolde;
                Ponto p1(x0,y0);
                figuras.push_back(new Circulo(p1,raio,fillmolde));

                desenhacirculo(x0,y0,raio,matriz,fillmolde);

            }else
            {
                cout<<"Erro no comando circle! circulo nao criado!"<<endl;
            }


            figuras[0]->draw(matriz);

            fin.close();
            break;
        }

        case(0):
        {
            cout<<"Digite o tamanho da matriz:";
            cin>>nl>>nc;
            matriz.alocamat(nl,nc);

            cout<<"Digite o pincel:";
            cin>>b;
            matriz.setBrush(b);
            int fig;

            do{
            cout<<"Qual figura vc quer criar? 1-linha, 2-retangulo, 3-circulo,  0-sair: ";

            cin>>fig;
                switch(fig)
                {
                    case(1):
                    {
                        int x0,y0,x1,y1;
                        cout<<"Digite as coordenadas do ponto inicial e final da reta:";
                        cin>>x0>>y0>>x1>>y1;
                        Ponto p1(x0,y0),p2(x1,y1);
                        figuras.push_back(new Reta(p1,p2));
                        desenhareta(p1.getx(),p1.gety(),p2.getx(),p2.gety(),matriz);
                        break;
                    }
                    case(2):
                    {
                        int x0,y0,largura, altura;
                        bool fillmolde;
                        cout<<"Digite a coordenada do canto superior esquerdo, da largura, da altura e se é preenchido(1) ou vazio(0):";
                        cin>>x0>>y0>>largura>>altura>>fillmolde;
                        Ponto p1(x0,y0);
                        figuras.push_back(new Retangulo(p1,largura,altura,fillmolde));
                        desenharetangulo(p1,largura,altura,matriz,fillmolde);
                        break;
                    }
                    case(3):
                    {
                        int x0,y0,raio;
                        bool fillmolde;
                        cout<<"Digite a coordenada do centro do circulo, o valor do raio e se imprime o contorno(0) ou um disco(1):";
                        cin>>x0>>y0>>raio>>fillmolde;
                        Ponto p1(x0,y0);
                        figuras.push_back(new Circulo(p1,raio,fillmolde));
                        desenhacirculo(x0,y0,raio,matriz,fillmolde);
                        break;
                    }
                }
            }while(fig!=0);

            figuras[0]->draw(matriz);
        }
    }
    cout<<"Deseja salvar a imagem num arquivo? 1-sim 0-nao:";
    bool yesno;
    cin>>yesno;
    if(yesno)
    {
        matriz.salvafigura();
    }

    for(unsigned int i=0;i<figuras.size();i++)
    {
        delete figuras[i];
    }

    return 0;
}
