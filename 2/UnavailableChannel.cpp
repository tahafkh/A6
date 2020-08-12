#include"UnavailableChannel.hpp"
#define ERROR_MESSAGE "Channel does not exist"
const char* UnavailableChannel::what() const throw(){
    return ERROR_MESSAGE;
}