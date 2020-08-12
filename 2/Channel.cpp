#include"Channel.hpp"
#include"Bot.hpp"
using namespace std;
void Channel::notify(){
    for(int i=0;i<subscribed_bots.size();i++){
        subscribed_bots[i]->notify(this);
    }
}
void Channel::get_new_message(string new_message){
    channel_messages.push_back(new_message);
    notify();
}
Channel::Channel(string channel_name){
    name = channel_name;
}