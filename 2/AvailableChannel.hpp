#ifndef AVAILABLECHANNEL_H
#define AVAILABLECHANNEL_H "AVAILABLECHANNEL_H"
#include<exception>
class AvailableChannel : public std::exception{
public:
    const char* what() const throw();
};
#endif