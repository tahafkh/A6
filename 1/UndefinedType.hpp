#ifndef UNDEFINEDTYPE_H
#define UNDEFINEDTYPE_H "UNDEFINEDTYPE_H"
#include<exception>
class UndefinedType : public std::exception{
public:
    const char* what() const throw();
};
#endif