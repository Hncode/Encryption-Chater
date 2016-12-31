/*
 *  
 *
 */

#ifndef _CLIENT_H__
#define _CLIENT_H__

#include <strings.h>    //C string
#include <sys/socket.h>

#include <string>
#include "constant.h"
//#include "network.h"


using std::string;

class Client
{
public:
    Client();
    ~Client();
public:
    int init();
    int connect(const string &user_name, const string &password);
    int quit();
private:
    int m_sockfd;
    int m_n;
    struct sockaddr_in m_servaddr;
};

#endif //_CLIENT_H__
