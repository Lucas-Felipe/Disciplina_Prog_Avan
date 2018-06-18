#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTextBrowser>
#include <QString>
#include <vector>
#include "plotter.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    socket = new QTcpSocket(this);
    tcpConnect();

    connect(ui->pushButton_start,SIGNAL(clicked(bool)),this,SLOT(start()));
    connect(ui->pushButton_connect,SIGNAL(clicked(bool)),this,SLOT(tcpConnect()));
    connect(ui->pushButton_desconnect,SIGNAL(clicked(bool)),this,SLOT(tcpDisconnect()));
    connect(ui->pushButton_stop,SIGNAL(clicked(bool)),this,SLOT(stop()));
    connect(ui->pushButton_update,SIGNAL(clicked(bool)),this,SLOT(update()));
}

void MainWindow::tcpConnect(){
    socket->connectToHost(ui->lineEdit_IPdoServ->text(),1234);
    if(socket->waitForConnected(3000)){
        qDebug() << "Connected";
        }
    else{
        qDebug() << "Disconnected";
    }
}

void MainWindow::tcpDisconnect()
{
    socket->disconnectFromHost();
    qDebug() << "Desconectado";
}

void MainWindow::start()
{
    timer= startTimer(ui->horizontalSlider_timing->value() * 10);
    qDebug ()<< "Timer Started";
}

void MainWindow::stop()
{
    killTimer(timer);
    qDebug() << "Timer Killed";
}

void MainWindow::update()
{
    //armazena o comando a ser enviado ao servidor
    QString strList;

    //armazena o ip coletado que está conectado ao servidor
    QString str;

    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
            qDebug() << "Pegando IP";
            strList = "list\r\n";
            socket->write(strList.toStdString().c_str());

              socket->waitForBytesWritten();
              socket->waitForReadyRead();
              qDebug() << socket->bytesAvailable();
              while(socket->bytesAvailable()){
                  //separa o tempo recebido do servidor do valor dado
                  str = socket->readLine().replace("\n","").replace("\r","");
                 ui->listWidget_IPs->addItem(str);

               }
        }
    }
}

void MainWindow::getData(){
    if(timer)
    {
        killTimer(timer);
    }
    timer=startTimer(ui->horizontalSlider_timing->value()*10);
}

void MainWindow::timerEvent(QTimerEvent *e)
{
    QString str;
    QStringList list;
    qint64 thetime, num;
    double max_x, min_x, min_y, max_y;
    vector<double> time;
    vector<double> data;
    vector<double> temposnorm;
    vector<double> dadosnorm;

    qDebug() << "to get data...";
    if(socket->state() == QAbstractSocket::ConnectedState){
        if(socket->isOpen()){
            qDebug() << "reading...";
            str = "get " + ui->listWidget_IPs->currentItem()->text() + " 30\r\n";
            socket->write(str.toStdString().c_str());
            socket->waitForBytesWritten();
            socket->waitForReadyRead();
            qDebug() << socket->bytesAvailable();
            time.clear();
            data.clear();
            while(socket->bytesAvailable()){
                str = socket->readLine().replace("\n","").replace("\r","");
                list = str.split(" ");

                if(list.size() == 2){
                    bool ok;
                    str = list.at(0);
                    thetime = str.toLongLong(&ok);
                    time.push_back(thetime);

                    str = list.at(1);
                    num = str.toLongLong(&ok);
                    data.push_back(num);
                    qDebug() << thetime << ": " << str;
                }
            }
        }
    }

    qDebug()<<data.size()<<time.size();
    //achando valores maximos e minimos
    max_x = time[0], min_x = time[0];
    min_y = data[0], max_y = data[0];

    for(int i = 1 ; i < 30; i++){
       if(time[i] < min_x){
          min_x = time[i];
       }else if(time[i] > max_x){
          max_x = time[i];
       }
       if(data[i] < min_y){
          min_y = data[i];
       }else if(data[i] > max_y){
          max_y = data[i];
       }
    }

    qDebug()<<max_x-min_x;

    qDebug()<<max_y<<min_y;

    //normalizando dados
    temposnorm.clear();
    dadosnorm.clear();
    for(int i = 0; i<30; i++){
            temposnorm.push_back((time[i] - min_x)/(max_x - min_x));
            dadosnorm.push_back((data[i] - min_y)/(max_y - min_y));
    }
    qDebug()<<"passou";
    ui->widget_grafico->plotGrafico(temposnorm,dadosnorm);
}

void MainWindow::getItem()
{
    QListWidgetItem *item = ui->listWidget_IPs->currentItem();
    ui->lineEdit_IPdoServ->setText( item->text());
}

MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}
