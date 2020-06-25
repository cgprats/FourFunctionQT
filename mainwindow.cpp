#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CalculateButton_clicked()
{
    switch(_operation) {
        case 1:
            _result = _valueOne + _valueTwo;
            break;
        case 2:
            _result = _valueOne - _valueTwo;
            break;
        case 3:
            _result = _valueOne * _valueTwo;
            break;
        case 4:
            _result = _valueOne / _valueTwo;
    }
    ui->CalculatedResultLabel->setText(QString::number(_result));
}

void MainWindow::on_ValueOneTextBox_textChanged()
{
    QString valueOneQString = ui->ValueOneTextBox->toPlainText();
    _valueOne = valueOneQString.toDouble();
}

void MainWindow::on_ValueTwoTextBox_textChanged()
{
    QString valueTwoQString = ui->ValueTwoTextBox->toPlainText();
    _valueTwo = valueTwoQString.toDouble();
}

void MainWindow::on_AdditionRadio_toggled(bool checked)
{
    if (checked) {
        _operation = 1;
    }
}

void MainWindow::on_SubtractionRadio_toggled(bool checked)
{
    if (checked) {
        _operation = 2;
    }
}

void MainWindow::on_MultiplicationRadio_toggled(bool checked)
{
    if (checked) {
        _operation = 3;
    }
}

void MainWindow::on_DivisionRadio_toggled(bool checked)
{
    if (checked) {
        _operation = 4;
    }
}
