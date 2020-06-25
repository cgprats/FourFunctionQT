/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *ValueOneLabel;
    QLabel *ValueTwoLabel;
    QTextEdit *ValueOneTextBox;
    QTextEdit *ValueTwoTextBox;
    QLabel *ResultLabel;
    QLabel *CalculatedResultLabel;
    QPushButton *CalculateButton;
    QLabel *OperationLabel;
    QRadioButton *AdditionRadio;
    QRadioButton *SubtractionRadio;
    QRadioButton *MultiplicationRadio;
    QRadioButton *DivisionRadio;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(319, 171);
        MainWindow->setMinimumSize(QSize(319, 171));
        MainWindow->setMaximumSize(QSize(319, 171));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ValueOneLabel = new QLabel(centralWidget);
        ValueOneLabel->setObjectName(QStringLiteral("ValueOneLabel"));
        ValueOneLabel->setGeometry(QRect(10, 10, 71, 31));
        ValueTwoLabel = new QLabel(centralWidget);
        ValueTwoLabel->setObjectName(QStringLiteral("ValueTwoLabel"));
        ValueTwoLabel->setGeometry(QRect(10, 50, 71, 31));
        ValueOneTextBox = new QTextEdit(centralWidget);
        ValueOneTextBox->setObjectName(QStringLiteral("ValueOneTextBox"));
        ValueOneTextBox->setGeometry(QRect(80, 10, 101, 31));
        ValueTwoTextBox = new QTextEdit(centralWidget);
        ValueTwoTextBox->setObjectName(QStringLiteral("ValueTwoTextBox"));
        ValueTwoTextBox->setGeometry(QRect(80, 50, 101, 31));
        ValueTwoTextBox->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        ResultLabel = new QLabel(centralWidget);
        ResultLabel->setObjectName(QStringLiteral("ResultLabel"));
        ResultLabel->setGeometry(QRect(30, 120, 51, 31));
        CalculatedResultLabel = new QLabel(centralWidget);
        CalculatedResultLabel->setObjectName(QStringLiteral("CalculatedResultLabel"));
        CalculatedResultLabel->setGeometry(QRect(80, 120, 101, 31));
        CalculateButton = new QPushButton(centralWidget);
        CalculateButton->setObjectName(QStringLiteral("CalculateButton"));
        CalculateButton->setGeometry(QRect(80, 90, 101, 26));
        OperationLabel = new QLabel(centralWidget);
        OperationLabel->setObjectName(QStringLiteral("OperationLabel"));
        OperationLabel->setGeometry(QRect(210, 0, 71, 31));
        AdditionRadio = new QRadioButton(centralWidget);
        AdditionRadio->setObjectName(QStringLiteral("AdditionRadio"));
        AdditionRadio->setGeometry(QRect(210, 30, 102, 24));
        AdditionRadio->setChecked(true);
        SubtractionRadio = new QRadioButton(centralWidget);
        SubtractionRadio->setObjectName(QStringLiteral("SubtractionRadio"));
        SubtractionRadio->setGeometry(QRect(210, 60, 102, 24));
        MultiplicationRadio = new QRadioButton(centralWidget);
        MultiplicationRadio->setObjectName(QStringLiteral("MultiplicationRadio"));
        MultiplicationRadio->setGeometry(QRect(210, 90, 102, 24));
        DivisionRadio = new QRadioButton(centralWidget);
        DivisionRadio->setObjectName(QStringLiteral("DivisionRadio"));
        DivisionRadio->setGeometry(QRect(210, 120, 102, 24));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FourFunctionQT", nullptr));
        ValueOneLabel->setText(QApplication::translate("MainWindow", "Value One: ", nullptr));
        ValueTwoLabel->setText(QApplication::translate("MainWindow", "Value Two: ", nullptr));
        ResultLabel->setText(QApplication::translate("MainWindow", "Result:", nullptr));
        CalculatedResultLabel->setText(QString());
        CalculateButton->setText(QApplication::translate("MainWindow", "Calculate", nullptr));
        OperationLabel->setText(QApplication::translate("MainWindow", "Operation:", nullptr));
        AdditionRadio->setText(QApplication::translate("MainWindow", "Addition", nullptr));
        SubtractionRadio->setText(QApplication::translate("MainWindow", "Subtraction", nullptr));
        MultiplicationRadio->setText(QApplication::translate("MainWindow", "Multiplication", nullptr));
        DivisionRadio->setText(QApplication::translate("MainWindow", "Di&vision", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
