#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>
#include <QTextBrowser>
#include <QString>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    socket = new QTcpSocket(this);
    tcpConnect();

    connect(ui->pushButton_start,SIGNAL(clicked(bool)),this,SLOT(start()));
    connect(ui->pushButton_connect,SIGNAL(clicked(bool)),this,SLOT(tcpConnect()));
    connect(ui->pushButton_desconnect,SIGNAL(clicked(bool)),this,SLOT(Disconnect()));
    connect(ui->pushButton_stop,SIGNAL(clicked(bool)),this,SLOT(stop()));
}

void MainWindow::tcpConnect(){

    socket->connectToHost(ui->textEdit_IP->toPlainText(),1234);

    if(socket->waitForConnected(3000))
    {
        qDebug() << "Connected";
        ui->textBrowser_dados->append("Connect");
    }else
    {
        qDebug() << "Disconnected";
    }
}


void MainWindow::putData(){
    QDateTime datetime;
    QString str;
    qint64 msecdate;
    int min,max;


    min=ui->horizontalSlider_minimo->value();
    max=ui->horizontalSlider_maximo->value();

    if(socket->state()== QAbstractSocket::ConnectedState){

        msecdate = QDateTime::currentDateTime().toMSecsSinceEpoch();

        str = "set "+ QString::number(msecdate) + " " + QString::number(qrand()% max + min) + "\r\n";

        qDebug() << str;
        qDebug() << socket->write(str.toStdString().c_str()) << " bytes written";


        ui->textBrowser_dados->append(str);
        if(socket->waitForBytesWritten(3000)){
            qDebug() << "wrote";
        }
    }
}

/**
 * @brief Disconnect
 * Método que disconecta o programa do server
 */
void MainWindow::Disconnect()
{
    socket->disconnectFromHost();
}

/**
 * @brief start
 * Método que começa a produção de dados aleatórios
 */
void MainWindow::start()
{
    timer = startTimer(ui->horizontalSlider_timing->value()*1000);
    qDebug ()<< "Timer Started";
}

/**
* @brief timerEvent
* Método que executa constantemente uma função do programa
* @param e
*/
void MainWindow::timerEvent(QTimerEvent *e)
{
    putData();
    qDebug() << "Sending Data";
}

/**
 * @brief stop
 * Método que interrompe a produção de dados
 */
void MainWindow::stop()
{
    killTimer(timer);
    timer=0;
    qDebug() << "Timer Killed";
}

MainWindow::~MainWindow()
{
    delete socket;
    delete ui;
}
