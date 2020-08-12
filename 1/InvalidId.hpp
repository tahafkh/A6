#ifndef INVALIDID_H
#define INVALIDID_H "INVALID_H"
#include<exception>
class InvalidId : public std::exception{
public:
    const char* what() const throw();
};
#endif
