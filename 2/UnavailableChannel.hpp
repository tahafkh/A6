#ifndef UNAVAILABLECHANNEL_H
#define UNAVAILABLECHANNEL_H "UNAVAILABLECHANNEL_H"
#include<exception>
class UnavailableChannel : public std::exception{
public:
    const char* what() const throw();
};
#endif