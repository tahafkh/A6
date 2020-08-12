#include"Librarian.hpp"
#include"Channel.hpp"
#define MIN_MESSAGES 0
#define MAX_MESSAGES 5
#define QUIET_MESSAGE "Quiet!"
Librarian::Librarian(){
    message_numbers = MIN_MESSAGES;
}
void Librarian::notify(Channel* subscribed_channel){
    message_numbers++;
    if(message_numbers == MAX_MESSAGES){
        subscribed_channel->get_new_message(QUIET_MESSAGE);
        message_numbers = MIN_MESSAGES;
    }
}