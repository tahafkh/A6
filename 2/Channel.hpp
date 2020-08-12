#ifndef CHANNEL_H
#define CHANNEL_H "CHANNEL_H"
#include<vector>
#include<string>
class Bot;
class Channel{
public:
    std::string get_name(){ return name;}
    Channel(std::string channel_name);
    std::string show_latest_message(){ return channel_messages.back();}
    void get_new_message(std::string new_message);
    void subscribe_bot(Bot* new_subscriber){ subscribed_bots.push_back(new_subscriber);}
private:
    void notify();
    std::string name;
    std::vector<Bot*> subscribed_bots;
    std::vector<std::string> channel_messages;
};
#endif