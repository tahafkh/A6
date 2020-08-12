#ifndef LIBRARIAN_H
#define LIBRARIAN_H "LIBRARIAN_H"
#include"Bot.hpp"
class Librarian : public Bot{
public:
    Librarian();
    void notify(Channel* subscribed_channel);
private:
    int message_numbers;
};
#endif