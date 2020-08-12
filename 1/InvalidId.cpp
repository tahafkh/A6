#include"InvalidId.hpp"
#define ERROR_MESSAGE "Invalid id.\n"
const char* InvalidId::what() const throw(){
    return ERROR_MESSAGE;
}