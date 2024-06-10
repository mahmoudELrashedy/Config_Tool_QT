/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter_2;
    QLabel *label;
    QComboBox *BAUD_RATE;
    QSplitter *splitter;
    QLabel *label_2;
    QComboBox *PARITY;
    QSplitter *splitter_3;
    QLabel *label_3;
    QComboBox *DATA_BITS;
    QSplitter *splitter_4;
    QLabel *label_4;
    QComboBox *STOP_BITS;
    QSplitter *splitter_5;
    QLabel *label_5;
    QComboBox *SAMPLING_RATE;
    QPushButton *pushButton;
    QWidget *tab_2;
    QPushButton *pushButton_3;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_19;
    QLabel *label_6;
    QComboBox *CLOCK_PHASE;
    QSplitter *splitter_9;
    QLabel *label_7;
    QComboBox *CLOCK_POLARITY;
    QSplitter *splitter_8;
    QLabel *label_8;
    QComboBox *MASTER_MODE;
    QSplitter *splitter_7;
    QLabel *label_9;
    QComboBox *CLK_PRESCALER;
    QSplitter *splitter_6;
    QLabel *label_21;
    QComboBox *SPI_STATE;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(120, 40, 641, 501));
        tab = new QWidget();
        tab->setObjectName("tab");
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(41, 68, 311, 201));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter_2 = new QSplitter(layoutWidget);
        splitter_2->setObjectName("splitter_2");
        splitter_2->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter_2);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(10);
        label->setFont(font);
        splitter_2->addWidget(label);
        BAUD_RATE = new QComboBox(splitter_2);
        BAUD_RATE->addItem(QString());
        BAUD_RATE->addItem(QString());
        BAUD_RATE->addItem(QString());
        BAUD_RATE->addItem(QString());
        BAUD_RATE->addItem(QString());
        BAUD_RATE->setObjectName("BAUD_RATE");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BAUD_RATE->sizePolicy().hasHeightForWidth());
        BAUD_RATE->setSizePolicy(sizePolicy);
        splitter_2->addWidget(BAUD_RATE);

        verticalLayout->addWidget(splitter_2);

        splitter = new QSplitter(layoutWidget);
        splitter->setObjectName("splitter");
        splitter->setOrientation(Qt::Horizontal);
        label_2 = new QLabel(splitter);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        splitter->addWidget(label_2);
        PARITY = new QComboBox(splitter);
        PARITY->addItem(QString());
        PARITY->addItem(QString());
        PARITY->addItem(QString());
        PARITY->setObjectName("PARITY");
        splitter->addWidget(PARITY);

        verticalLayout->addWidget(splitter);

        splitter_3 = new QSplitter(layoutWidget);
        splitter_3->setObjectName("splitter_3");
        splitter_3->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_3);
        label_3->setObjectName("label_3");
        label_3->setFont(font);
        splitter_3->addWidget(label_3);
        DATA_BITS = new QComboBox(splitter_3);
        DATA_BITS->addItem(QString());
        DATA_BITS->addItem(QString());
        DATA_BITS->setObjectName("DATA_BITS");
        splitter_3->addWidget(DATA_BITS);

        verticalLayout->addWidget(splitter_3);

        splitter_4 = new QSplitter(layoutWidget);
        splitter_4->setObjectName("splitter_4");
        splitter_4->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(splitter_4);
        label_4->setObjectName("label_4");
        label_4->setFont(font);
        splitter_4->addWidget(label_4);
        STOP_BITS = new QComboBox(splitter_4);
        STOP_BITS->addItem(QString());
        STOP_BITS->addItem(QString());
        STOP_BITS->setObjectName("STOP_BITS");
        QFont font1;
        font1.setBold(false);
        STOP_BITS->setFont(font1);
        splitter_4->addWidget(STOP_BITS);

        verticalLayout->addWidget(splitter_4);

        splitter_5 = new QSplitter(layoutWidget);
        splitter_5->setObjectName("splitter_5");
        splitter_5->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_5);
        label_5->setObjectName("label_5");
        label_5->setFont(font);
        splitter_5->addWidget(label_5);
        SAMPLING_RATE = new QComboBox(splitter_5);
        SAMPLING_RATE->addItem(QString());
        SAMPLING_RATE->addItem(QString());
        SAMPLING_RATE->setObjectName("SAMPLING_RATE");
        splitter_5->addWidget(SAMPLING_RATE);

        verticalLayout->addWidget(splitter_5);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(290, 350, 161, 41));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        pushButton_3 = new QPushButton(tab_2);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(240, 370, 161, 41));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(60, 70, 361, 261));
        verticalLayout_3 = new QVBoxLayout(layoutWidget1);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        splitter_19 = new QSplitter(layoutWidget1);
        splitter_19->setObjectName("splitter_19");
        splitter_19->setOrientation(Qt::Horizontal);
        label_6 = new QLabel(splitter_19);
        label_6->setObjectName("label_6");
        label_6->setFont(font);
        splitter_19->addWidget(label_6);
        CLOCK_PHASE = new QComboBox(splitter_19);
        CLOCK_PHASE->addItem(QString());
        CLOCK_PHASE->addItem(QString());
        CLOCK_PHASE->setObjectName("CLOCK_PHASE");
        splitter_19->addWidget(CLOCK_PHASE);

        verticalLayout_3->addWidget(splitter_19);

        splitter_9 = new QSplitter(layoutWidget1);
        splitter_9->setObjectName("splitter_9");
        splitter_9->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_9);
        label_7->setObjectName("label_7");
        label_7->setFont(font);
        splitter_9->addWidget(label_7);
        CLOCK_POLARITY = new QComboBox(splitter_9);
        CLOCK_POLARITY->addItem(QString());
        CLOCK_POLARITY->addItem(QString());
        CLOCK_POLARITY->setObjectName("CLOCK_POLARITY");
        splitter_9->addWidget(CLOCK_POLARITY);

        verticalLayout_3->addWidget(splitter_9);

        splitter_8 = new QSplitter(layoutWidget1);
        splitter_8->setObjectName("splitter_8");
        splitter_8->setOrientation(Qt::Horizontal);
        label_8 = new QLabel(splitter_8);
        label_8->setObjectName("label_8");
        label_8->setFont(font);
        splitter_8->addWidget(label_8);
        MASTER_MODE = new QComboBox(splitter_8);
        MASTER_MODE->addItem(QString());
        MASTER_MODE->addItem(QString());
        MASTER_MODE->setObjectName("MASTER_MODE");
        splitter_8->addWidget(MASTER_MODE);

        verticalLayout_3->addWidget(splitter_8);

        splitter_7 = new QSplitter(layoutWidget1);
        splitter_7->setObjectName("splitter_7");
        splitter_7->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_7);
        label_9->setObjectName("label_9");
        label_9->setFont(font);
        splitter_7->addWidget(label_9);
        CLK_PRESCALER = new QComboBox(splitter_7);
        CLK_PRESCALER->addItem(QString());
        CLK_PRESCALER->addItem(QString());
        CLK_PRESCALER->addItem(QString());
        CLK_PRESCALER->addItem(QString());
        CLK_PRESCALER->setObjectName("CLK_PRESCALER");
        splitter_7->addWidget(CLK_PRESCALER);

        verticalLayout_3->addWidget(splitter_7);

        splitter_6 = new QSplitter(layoutWidget1);
        splitter_6->setObjectName("splitter_6");
        splitter_6->setOrientation(Qt::Horizontal);
        label_21 = new QLabel(splitter_6);
        label_21->setObjectName("label_21");
        label_21->setFont(font);
        splitter_6->addWidget(label_21);
        SPI_STATE = new QComboBox(splitter_6);
        SPI_STATE->addItem(QString());
        SPI_STATE->addItem(QString());
        SPI_STATE->setObjectName("SPI_STATE");
        splitter_6->addWidget(SPI_STATE);

        verticalLayout_3->addWidget(splitter_6);

        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Baud rate", nullptr));
        BAUD_RATE->setItemText(0, QCoreApplication::translate("MainWindow", "9600", nullptr));
        BAUD_RATE->setItemText(1, QCoreApplication::translate("MainWindow", "19200", nullptr));
        BAUD_RATE->setItemText(2, QCoreApplication::translate("MainWindow", "38400", nullptr));
        BAUD_RATE->setItemText(3, QCoreApplication::translate("MainWindow", "57600", nullptr));
        BAUD_RATE->setItemText(4, QCoreApplication::translate("MainWindow", "115200", nullptr));

        label_2->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        PARITY->setItemText(0, QCoreApplication::translate("MainWindow", "NO_PARITY", nullptr));
        PARITY->setItemText(1, QCoreApplication::translate("MainWindow", "EVEN_PARITY", nullptr));
        PARITY->setItemText(2, QCoreApplication::translate("MainWindow", "ODD_PARITY", nullptr));

        label_3->setText(QCoreApplication::translate("MainWindow", "Data bits", nullptr));
        DATA_BITS->setItemText(0, QCoreApplication::translate("MainWindow", "EIGHT_BITS", nullptr));
        DATA_BITS->setItemText(1, QCoreApplication::translate("MainWindow", "NINE_BITS", nullptr));

        label_4->setText(QCoreApplication::translate("MainWindow", "Stop bits", nullptr));
        STOP_BITS->setItemText(0, QCoreApplication::translate("MainWindow", "ONE_STOP_BIT", nullptr));
        STOP_BITS->setItemText(1, QCoreApplication::translate("MainWindow", "TWO_STOP_BIT", nullptr));

        label_5->setText(QCoreApplication::translate("MainWindow", "Sampling rate", nullptr));
        SAMPLING_RATE->setItemText(0, QCoreApplication::translate("MainWindow", "OVER_8", nullptr));
        SAMPLING_RATE->setItemText(1, QCoreApplication::translate("MainWindow", "OVER_16", nullptr));

        pushButton->setText(QCoreApplication::translate("MainWindow", "Generate Code", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "UART", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "Generate Code", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Clock phase", nullptr));
        CLOCK_PHASE->setItemText(0, QCoreApplication::translate("MainWindow", "CPHA_WR_FRST", nullptr));
        CLOCK_PHASE->setItemText(1, QCoreApplication::translate("MainWindow", "CPHA_R_FRST", nullptr));

        label_7->setText(QCoreApplication::translate("MainWindow", "Clock polarity", nullptr));
        CLOCK_POLARITY->setItemText(0, QCoreApplication::translate("MainWindow", "CPOL_IDLE_HIGH", nullptr));
        CLOCK_POLARITY->setItemText(1, QCoreApplication::translate("MainWindow", "CPOL_IDLE_LOW", nullptr));

        label_8->setText(QCoreApplication::translate("MainWindow", "Master mode", nullptr));
        MASTER_MODE->setItemText(0, QCoreApplication::translate("MainWindow", "MASTER_ENABLE", nullptr));
        MASTER_MODE->setItemText(1, QCoreApplication::translate("MainWindow", "MASTER_DISABLE", nullptr));

        label_9->setText(QCoreApplication::translate("MainWindow", "Clock Prescaler", nullptr));
        CLK_PRESCALER->setItemText(0, QCoreApplication::translate("MainWindow", "DIV_2", nullptr));
        CLK_PRESCALER->setItemText(1, QCoreApplication::translate("MainWindow", "DIV_4", nullptr));
        CLK_PRESCALER->setItemText(2, QCoreApplication::translate("MainWindow", "DIV_8", nullptr));
        CLK_PRESCALER->setItemText(3, QCoreApplication::translate("MainWindow", "DIV_16", nullptr));

        label_21->setText(QCoreApplication::translate("MainWindow", "SPI state", nullptr));
        SPI_STATE->setItemText(0, QCoreApplication::translate("MainWindow", "SPI_DISABLE", nullptr));
        SPI_STATE->setItemText(1, QCoreApplication::translate("MainWindow", "SPI_ENABLE", nullptr));

        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "SPI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
