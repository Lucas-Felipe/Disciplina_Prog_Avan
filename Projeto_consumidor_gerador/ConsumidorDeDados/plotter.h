#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <vector>

using namespace std;

class plotter : public QWidget
{
    Q_OBJECT
public:
    explicit plotter(QWidget *parent = nullptr);
    //Plotter(QWidget *parent);
    void paintEvent(QPaintEvent *event);
    void plotGrafico(vector<qint64> &t, vector<int> &v);

signals:

public slots:

};

#endif // PLOTTER_H
