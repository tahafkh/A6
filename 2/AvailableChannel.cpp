#include"AvailableChannel.hpp"
#define ERROR_MESSAGE "Channel already exists"
const char* AvailableChannel::what() const throw(){
    return ERROR_MESSAGE;
}