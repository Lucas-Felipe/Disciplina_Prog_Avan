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
 * Classe da janela principal do consumidor de dados
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /**
     * @brief MainWindow
     * Construtor da classe
     * @param parent
     * Sinaliza que essa janela é o pai
     */
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

public slots:

private slots:
    /**
     * @brief getData
     * Slot responsável por adquirir os dados do server
     */
    void getData();
    /**
     * @brief tcpConnect
     * Método que conecta no socket do server
     */
    void tcpConnect();
    /**
     * @brief tcpDisconnect
     * Método que disconecta o programa
     */
    void tcpDisconnect();
    /**
     * @brief start
     * Método que começa o recebimento de dados pelo programa
     */
    void start();
    /**
     * @brief stop
     * Método que interrompe o adquirimento de dados pelo programa
     */
    void stop();
    /**
     * @brief update
     * Método que atualiza a lista de IP's conectados
     */
    void update();
    /**
     * @brief timerEvent
     * Método que desenha contínuamente o gráfico
     * @param e
     */
    void timerEvent(QTimerEvent *e);

    void getItem();

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
     * Variável do tempo
     */
    int timer;
};

#endif // MAINWINDOW_H
