#ifndef DUPLICATECHANNEL_H
#define DUPLICATECHANNEL_H "DUPLICATECHANNEL_H"
#include<exception>
class DuplicateChannel : public std::exception{
public:
    const char* what() const throw();
};
#endif