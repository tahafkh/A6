#include"Fred.hpp"
#include"Channel.hpp"
using namespace std;
#define HI_MESSAGE "Hi"
#define HELLO_MESSAGE "Hello"
void Fred::notify(Channel* subscribed_channel){
    if(subscribed_channel->show_latest_message() == HI_MESSAGE){
        subscribed_channel->get_new_message(HELLO_MESSAGE);
    }
}