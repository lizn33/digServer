#ifndef SERVER_H
#define SERVER_H

#include <string>
#include <iostream>

#include "rediscon.h"
#include "grpcser.h"

void run(std::string ip,uint16_t port);

#endif