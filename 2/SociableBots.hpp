#ifndef SOCIABLEBOTS_H
#define SOCIABLEBOTS_H "SOCIABLEBOTS_H"
#include"Channel.hpp"
#include"Bot.hpp"
#include<sstream>
class SociableBots{
public:
    ~SociableBots();
    void check_command(std::string command);
private:
    Channel* find_channel(std::string channel_name);
    void add_bot(std::stringstream& bot_command);
    void add_echo(std::stringstream& echo_command);
    void add_librarian(std::stringstream& librarian_command);
    void add_logger(std::stringstream& logger_command);
    void add_fred(std::stringstream& fred_command);
    void tell_channel(std::stringstream& channel_command);
    void add_channel(std::stringstream& channel_command);
    std::vector<Channel*> total_channels;
    std::vector<Bot*> total_bots;
};
#endif