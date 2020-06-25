#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int _operation = 1;
    double _valueOne = 0;
    double _valueTwo = 0;
    double _result = 0;

private slots:
    void on_CalculateButton_clicked();

    void on_ValueOneTextBox_textChanged();

    void on_ValueTwoTextBox_textChanged();

    void on_AdditionRadio_toggled(bool checked);

    void on_SubtractionRadio_toggled(bool checked);

    void on_MultiplicationRadio_toggled(bool checked);

    void on_DivisionRadio_toggled(bool checked);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
