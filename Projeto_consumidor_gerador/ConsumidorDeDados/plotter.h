#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>

using namespace std;

/**
 * @brief The plotter class
 * Classe responsável por representar um gráfico através de um widget
 */
class plotter : public QWidget
{
    Q_OBJECT
private:
    vector<double> datatime;
    vector<double> data;
public:
    /**
     * @brief plotter
     * Construtor da classe
     * @param parent
     * Sinaliza o pai da classe
     */
    explicit plotter(QWidget *parent = nullptr);
    //Plotter(QWidget *parent);
    /**
     * @brief paintEvent
     * Método que determina o modo como será desenhado o gráfico
     * @param event
     */
    void paintEvent(QPaintEvent *event);
    /**
     * @brief plotGrafico
     * Método que faz o desenho das linhas pelos valores recebidos
     * @param t
     * Vetor de bits que sinaliza o tempo
     * @param v
     * Vetor de inteiros com os valores passados pelo server
     */
    void plotGrafico(vector<double> &t, vector<double> &v);

signals:

public slots:

};

#endif // PLOTTER_H
