#include "aboutdialog.h"
#include "ui_aboutdialog.h"
#include "ping.h"

AboutDialog::AboutDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AboutDialog)
{
    ui->setupUi(this);
    // Add my custom texts
    this->setWindowTitle(QString::fromUtf8(Ping::s_gping_about.c_str()));
    ui->lblAbout->setText(QString::fromUtf8(Ping::s_gping_about.c_str()) + " v. " + QString::fromUtf8(Ping::s_version.c_str()) + " " + QString::fromUtf8(Ping::s_by_carles_mateo.c_str()));
    ui->lblAboutDescription->setText(QString::fromUtf8(Ping::s_html_about_description.c_str()));
}

AboutDialog::~AboutDialog()
{
    delete ui;
}

void AboutDialog::on_buttonBox_accepted()
{
    this->hide();
}

void AboutDialog::on_buttonBox_rejected()
{
    this->hide();
}
