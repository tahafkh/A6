#ifndef LOGGER_H
#define LOGGER_H "LOGGER_H"
#include"Bot.hpp"
#include<string>
class Logger : public Bot{
public:
    Logger(std::string output_filename){ filename = output_filename;}
    void notify(Channel* subscribed_channel);
private:
    std::string filename;
};
#endif