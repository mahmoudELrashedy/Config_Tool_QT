#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QMessageBox>
#include <QDate>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // QString baudRate = ui->BAUD_RATE->currentText() ;
    // QString parity = ui->PARITY->currentText() ;
    // QString stopBits = ui->STOP_BITS->currentText() ;
    // QString dataBits = ui ->DATA_BITS->currentText() ;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    // QFile file("D:/Eclipsee_Project_ARM/ARM_WAZEFFA/include/MCAL/UART/UART_config.h") ;
    // QString baudRate = ui->BAUD_RATE->currentText() ;
    // QString parity = ui->PARITY->currentText() ;
    // QString stopBits = ui->STOP_BITS->currentText() ;
    // QString dataBits = ui ->DATA_BITS->currentText() ;
    // QString samplingRate = ui->SAMPLING_RATE->currentText() ;
    // if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
    //     QTextStream out(&file);
    //     out << "#ifndef UART_CONFIG_H\n";
    //     out << "#define UART_CONFIG_H\n\n\n";
    //     out << "#define BAUD_RATE " << baudRate << "\n\n";
    //     out << "#define PARITY " << parity << "\n\n";
    //     out << "#define STOP_BITS " << stopBits << "\n\n";
    //     out << "#define DATA_BITS " << dataBits << "\n\n";
    //     out << "#define SAMPLING_RATE " << samplingRate <<"\n\n\n";
    //     out << "#endif // UART_CONFIG_H\n";

    //     file.close();
    //     QMessageBox::information(this, "Success", "UART_Config.h has been generated.");
    // } else {
    //     QMessageBox::warning(this, "Error", "Unable to create UART_Config.h");
    // }
    QFile file("D:/Eclipsee_Project_ARM/ARM_WAZEFFA/include/MCAL/UART/UART_config.h");
    QString baudRate = ui->BAUD_RATE->currentText();
    QString parity = ui->PARITY->currentText();
    QString stopBits = ui->STOP_BITS->currentText();
    QString dataBits = ui->DATA_BITS->currentText();
    QString samplingRate = ui->SAMPLING_RATE->currentText();

    QString currentDate = QDate::currentDate().toString("yyyy-MM-dd");

    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << "/*\n";
        out << " * UART_Config.h\n";
        out << " *\n";
        out << " *  Created on: " << currentDate << "\n";
        out << " *      Author: Mahmoud Elrashedy\n";
        out << " */\n\n";
        out << "#ifndef UART_CONFIG_H_\n";
        out << "#define UART_CONFIG_H_\n\n";
        out << "/*\n";
        out << " * Baud rate options\n";
        out << " * 1-9600\n";
        out << " * 2-19200\n";
        out << " * 3-38400\n";
        out << " * 4-57600\n";
        out << " * 5-115200\n";
        out << " */\n";
        out << "#define BAUD_RATE\t\t" << baudRate << "\n\n";
        out << "/*\n";
        out << " * Parity options\n";
        out << " * 1-NO_PARITY\n";
        out << " * 2-EVEN_PARITY\n";
        out << " * 3-ODD_PARITY\n";
        out << " */\n";
        out << "#define PARITY\t\t" << parity << "\n\n";
        out << "/*\n";
        out << " * Stop bits options\n";
        out << " * 1-ONE_STOP_BIT\n";
        out << " * 2-TWO_STOP_BIT\n";
        out << " */\n";
        out << "#define STOP_BITS\t\t" << stopBits << "\n\n";
        out << "/*\n";
        out << " * Data bits options\n";
        out << " * 1-EIGHT_BITS\n";
        out << " * 2-NINE_BITS\n";
        out << " */\n";
        out << "#define DATA_BITS\t\t" << dataBits << "\n\n";
        out << "/*\n";
        out << " * Sampling rate options\n";
        out << " * 1-OVER_8\n";
        out << " * 2-OVER_16\n";
        out << " */\n";
        out << "#define SAMPLING_RATE\t\t" << samplingRate << "\n\n";
        out << "#endif /* UART_CONFIG_H_ */\n";

        file.close();
        QMessageBox::information(this, "Success", "UART_Config.h has been generated.");
    } else {
        QMessageBox::warning(this, "Error", "Unable to create UART_Config.h");
    }
}


void MainWindow::on_pushButton_3_clicked()
{
    QFile file("D:/Eclipsee_Project_ARM/ARM_WAZEFFA/include/MCAL/MSPI/MSPI_Config.h");

    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error", "Unable to create MSPI_Config.h");
        return;
    }

    QString clockPhase = ui->CLOCK_PHASE->currentText();
    QString clockPolarity = ui->CLOCK_POLARITY->currentText();
    QString masterMode = ui->MASTER_MODE->currentText();
    QString clockPrescaler = ui->CLK_PRESCALER->currentText();
    QString spiState = ui->SPI_STATE->currentText();

    QString currentDate = QDate::currentDate().toString("yyyy-MM-dd");

    QTextStream out(&file);
    out << "/*\n";
    out << " * MSPI_Config.h\n";
    out << " *\n";
    out << " *  Created on: " << currentDate << "\n";
    out << " *      Author: Mahmoud Elrashedy\n";
    out << " */\n\n";
    out << "#ifndef MSPI_CONFIG_H_\n";
    out << "#define MSPI_CONFIG_H_\n\n";
    out << "/*\n";
    out << " * clock phase options\n";
    out << " * 1-CPHA_WR_FRST\n";
    out << " * 2-CPHA_R_FRST*/\n";
    out << "#define CPHA_STATE\t\t" << clockPhase << "\n\n";
    out << "/*\n";
    out << " * clock polarity options\n";
    out << " * 1-CPOL_IDLE_HIGH\n";
    out << " * 2-CPOL_IDLE_LOW */\n";
    out << "#define CPOL_STATE\t\t" << clockPolarity << "\n\n";
    out << "/*\n";
    out << " * MASTER_MODE options\n";
    out << " * 1-MASTER_ENABLE\n";
    out << " * 2-MASTER_DISABLE*/\n";
    out << "#define MASTER_MODE\t\t" << masterMode << "\n\n";
    out << "/*\n";
    out << " * SPI_CLK_PRESCALER options\n";
    out << " * 1- DIV_2\n";
    out << " * 2- DIV_4\n";
    out << " * 3- DIV_8\n";
    out << " * 4- DIV_16 */\n";
    out << "#define SPI_CLK_PRESCALER\t\t" << clockPrescaler << "\n\n";
    out << "/*\n";
    out << " * SPI_STATE options\n";
    out << " * 1-SPI_ENABLE\n";
    out << " * 2-SPI_DISABLE\n";
    out << " */\n";
    out << "#define SPI_STATE\t\t" << spiState << "\n\n";
    out << "#endif /* MSPI_CONFIG_H_ */\n";

    file.close();
    QMessageBox::information(this, "Success", "MSPI_Config.h has been generated.");
}

