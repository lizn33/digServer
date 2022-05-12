#include "rediscon.h"
using std::string;

bool rediscon::connect(string ip, uint32_t port)
{
	_uq_redis_con.reset(redisConnect(ip.c_str(), port));
	return _uq_redis_con->err == 0;
}

rediscon::uqPtr_reply rediscon::get_reply(std::string command)
{
	uqPtr_reply uq_p_reply(
		static_cast<redisReply*>(redisCommand(_uq_redis_con.get(), command.c_str())),
		freeReplyObject
	);
	return uq_p_reply;
}

rediscon::rediscon(): _uq_redis_con(nullptr, redisFree){}

rediscon::rediscon(const rediscon& right): 
	_uq_redis_con(new redisContext(*right._uq_redis_con.get()), redisFree){}

rediscon::rediscon(rediscon&& right): 
	_uq_redis_con(std::move(right._uq_redis_con)){}

rediscon::~rediscon(){}