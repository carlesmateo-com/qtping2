#ifndef PING_H
#define PING_H

#include <stdio.h>
#include <errno.h>
#include <sys/time.h>

#include <sys/param.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <sys/file.h>

#include <netinet/in_systm.h>
#include <netinet/in.h>
#include <netinet/ip.h>
#include <netinet/ip_icmp.h>
#include <netdb.h>

#include <string>
#include <iostream>

/* QtPing2 by Carles Mateo
 *
 */

class Ping
{

public:
    Ping() {};
    //void doPing(MainWindow* o_mainwindow);
    ~Ping();

    //std::string exec(char* cmd) {
    std::string exec(std::string cmd) {

        char *c_cmd=new char[cmd.size()+1];
        c_cmd[cmd.size()]=0;
        memcpy(c_cmd,cmd.c_str(),cmd.size());

        FILE* pipe = popen(c_cmd, "r");
        if (!pipe) return "ERROR";

        char buffer[128];
        std::string result = "";

        while(!feof(pipe)) {
            if(fgets(buffer, 128, pipe) != NULL)
                result += buffer;
        }
        pclose(pipe);

        return result;
    }

public:
    static std::string s_title_window;
    static std::string s_gping_about;
    static std::string s_version;
    static std::string s_by_carles_mateo;
    static std::string s_html_about_description;

};

#endif // PING_H
