#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QClipboard>
#include "aboutdialog.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_copyButton_clicked();

    void on_actionE_xit_triggered();

    void on_lineEdit_returnPressed();

//private:
    void on_doPingButton_clicked();

    void on_action_About_triggered();

public:
    Ui::MainWindow *ui;
    AboutDialog *o_aboutdialog;

};


#endif // MAINWINDOW_H
