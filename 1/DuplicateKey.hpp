#ifndef DUPLICATEKEY_H
#define DUPLICATEKEY_H "DUPLICATEKEY_H"
#include<exception>
class DuplicateKey : public std::exception{
public:
    const char* what() const throw();
};
#endif