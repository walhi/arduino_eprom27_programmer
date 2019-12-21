#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "arduino.h"

#include <QMainWindow>
#include <QSerialPort>
#include <QListWidgetItem>
#include <QTimer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
signals:

  void chipReaded();

  void bufferUpdated();

  void chipUpdated();

private slots:
    void showBuf();

    void on_openFileButton_clicked();

    void on_saveFileButton_clicked();

    void on_readChipButton_clicked();

    void checkClear();

    void on_writeChipButton_clicked();

    void on_verifyChipButton_clicked();

    void verifyData();

    void on_c16Button_clicked();

    void on_c32Button_clicked();

    void on_c64Button_clicked();

    void on_c128Button_clicked();

    void on_c256Button_clicked();

    void on_c512Button_clicked();

    void resizeBuffers(uint32_t size);

    void on_connectButton_clicked();

    void on_disconnectButton_clicked();

    void on_updateButton_clicked();

    void on_showButton_toggled(bool checked);

    void updateButtons(bool actions, bool buffer);

    void reload_ports();

    void on_portList_itemClicked(QListWidgetItem *item);

    void on_voltageChipButton_toggled(bool checked);

    void showVoltage();

    void on_progressBar_valueChanged(int value);

    void chipOperationProgressBar(uint32_t value);

private:
    Ui::MainWindow *ui;
    QSerialPort *serialPort = NULL;
    arduino *mArduino = NULL;

    QTimer updatePortsTimer;
    QTimer updateVoltageTimer;
    QMetaObject::Connection updatePortsConnection;

    QMetaObject::Connection progressBarConnection;
    QMetaObject::Connection serialDataConnection;
    QMetaObject::Connection verifyDataConnection;
    QMetaObject::Connection checkClearConnection;
    QMetaObject::Connection updateBufConnection;
    QMetaObject::Connection updateVoltageConnection;

    bool chipSelected = false;
    bool bufferClear = true;
    uint32_t bufSize = 0;

    QByteArray bufWork;
    QByteArray bufCheck;

    void log(QString str);

    void openSerialPort(QString path);

    void closeSerialPort();

    void chipSelectSetEnabled (bool state);
};

#endif // MAINWINDOW_H
