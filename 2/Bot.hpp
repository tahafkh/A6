#ifndef BOT_H
#define BOT_H "BOT_H"
class Channel;
class Bot{
public:
    virtual void notify(Channel* subscribed_channel) = 0;
};
#endif