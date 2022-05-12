#ifndef REDISCON_H
#define REDISCON_H

#include <hiredis/hiredis.h>
#include <string>
#include <memory>

class rediscon
{
public:
    //连接redis数据库
    bool connect(std::string ip, uint32_t port = 6379);

    //reply返回类型, 声明为public
    using uqPtr_reply = std::unique_ptr<redisReply, decltype(freeReplyObject)*>;
    //执行命令函数
    uqPtr_reply get_reply(std::string command);
    
    //构造函数
    rediscon();
    rediscon(std::string ip, uint32_t port = 6379);
    rediscon(const rediscon& right);
    rediscon(rediscon&& right);

    //析构函数
    ~rediscon();
private:
    std::unique_ptr<redisContext, decltype(redisFree)*> _uq_redis_con;
};

#endif