#include "mainwindow.h"
#include <QApplication>
#include "ping.h"

std::string Ping::s_title_window    = "QtPing2";
std::string Ping::s_gping_about     = "About QtPing2";
std::string Ping::s_version         = "1.1";
std::string Ping::s_by_carles_mateo = "by Carles Mateo";
std::string Ping::s_html_about_description = Ping::s_title_window + " is an OpenSource program developed by Carles Mateo<br />You can ping hosts and copy the results to clipboard.<br /><br /><a href=\"http://blog.carlesmateo.com\">blog.carlesmateo.com</a>";

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle(QString::fromUtf8(Ping::s_title_window.c_str()));
    w.show();

    return a.exec();
}

