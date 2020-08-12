#ifndef ECHO_H
#define ECHO_H "ECHO_H"
#include"Bot.hpp"
class Echo : public Bot{
public:
    Echo(Channel* destination);
    void notify(Channel* subscribed_channel);
private:
    Channel* destination_channel;
};
#endif