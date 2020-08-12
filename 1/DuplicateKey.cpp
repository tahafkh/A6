#include"DuplicateKey.hpp"
#define ERROR_MESSAGE "Duplicate key.\n"
const char* DuplicateKey::what() const throw(){
    return ERROR_MESSAGE;
}