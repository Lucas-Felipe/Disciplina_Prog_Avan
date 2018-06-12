#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QDebug>
#include <QTimer>

namespace Ui {
class MainWindow;
}

/**
 * @brief The MainWindow class
 * Classe da janela principal do produtor de dados
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow
     * Construtor da classe
     * @param parent
     * Ponteiro que sinaliza o pai da classe
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

public slots:
    /**
     * @brief putData
     * Método que gera os dados e envia ao server
     */
    void putData();
    /**
     * @brief tcpConnect
     * Método que conecta o programa ao server
     */
    void tcpConnect();

private slots:
    /**
     * @brief Disconnect
     * Método que disconecta o programa do server
     */
    void Disconnect();
    /**
     * @brief start
     * Método que começa a produção de dados aleatórios
     */
    void start();
    /**
     * @brief stop
     * Método que interrompe a produção de dados
     */
    void stop();
    /**
    * @brief timerEvent
    * Método que executa constantemente uma função do programa
    * @param e
    */
    void timerEvent(QTimerEvent *e);

private:
    /**
     * @brief ui
     * Ponteiro da janela principal
     */
    Ui::MainWindow *ui;
    /**
     * @brief socket
     * Ponteiro do socket
     */
    QTcpSocket *socket;
    /**
     * @brief timer
     * Variável de tempo
     */
    int timer;
};

#endif // MAINWINDOW_H
