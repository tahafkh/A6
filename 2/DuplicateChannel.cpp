#include"DuplicateChannel.hpp"
#define ERROR_MESSAGE "Source and destination cannot be the same channel"
const char* DuplicateChannel::what() const throw(){
    return ERROR_MESSAGE;
}
