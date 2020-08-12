#ifndef FRED_H
#define FRED_H "FRED_H"
#include"Bot.hpp"
class Fred : public Bot{
public:
    void notify(Channel* subscribed_channel);
};
#endif