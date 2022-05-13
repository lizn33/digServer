#include "server.h"

using std::string;
using std::cerr;
using std::cout;
using std::endl;

void run(string ip,uint16_t port)
{
    rediscon rcon;
    if(!rcon.connect(ip, port))
    {
        cerr << "redis connect error" << endl;
        exit(0);
    }
    cout << "redis-con success" << endl;
}