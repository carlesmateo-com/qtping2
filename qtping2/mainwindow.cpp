#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ping.h"
#include "aboutdialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    o_aboutdialog(new AboutDialog)
{

    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_copyButton_clicked()
{
    QString s_results_ping = QString::fromUtf8(ui->textEdit->toPlainText().toStdString().c_str());

    QClipboard *clipboard = QApplication::clipboard();
    clipboard->setText(s_results_ping);
}

void MainWindow::on_actionE_xit_triggered()
{
    qApp->quit();
}

void MainWindow::on_lineEdit_returnPressed()
{
    //std::string s_times = ui->comboBox->itemData(ui->comboBox->currentIndex()).toString().toStdString();  // This does not work
    std::string s_times = ui->comboBox->currentText().toStdString();

    std::string s_host = ui->lineEdit->text().toStdString();
    std::string s_pinging = "Pinging " + s_host + " " + s_times + " times";
    std::string s_ping_finished = "Finished ping " + s_host;

    QString qts_status_pinging = QString::fromUtf8(s_pinging.c_str());
    //ui->statusBar->setStatusTip(qts_status_pinging);
    ui->statusBar->showMessage(qts_status_pinging);

    // Clear the results
    ui->textEdit->clear();
    qApp->processEvents();

    // Do Ping
    Ping *o_ping;
    o_ping = new Ping();
    //o_ping->doPing(ui);

    //char *cmd;
    std::string cmd;
    cmd = "ping -c " + s_times + " ";
    cmd.append(s_host);

    std::string s_result;

    s_result = o_ping->exec(cmd);

    QString qts_result = QString::fromUtf8(s_result.c_str());

    ui->textEdit->setText(qts_result);

    QString qts_status_ping_done = QString::fromUtf8(s_ping_finished.c_str());
    ui->statusBar->showMessage(qts_status_ping_done);

}

void MainWindow::on_doPingButton_clicked()
{
    MainWindow::on_lineEdit_returnPressed();
}

void MainWindow::on_action_About_triggered()
{
    //o_aboutdialog = new Ui::AboutDialog();

    //o_aboutdialog->setWindowTitle("About QtPing");
    o_aboutdialog->show();
}
