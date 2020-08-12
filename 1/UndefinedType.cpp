#include"UndefinedType.hpp"
#define ERROR_MESSAGE "Undefined type.\n"
const char* UndefinedType::what() const throw(){
    return ERROR_MESSAGE;
}