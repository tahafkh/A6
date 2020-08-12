#include"Echo.hpp"
#include"Channel.hpp"
using namespace std;
void Echo::notify(Channel* subscribed_channel){
    destination_channel->get_new_message(subscribed_channel->show_latest_message());
}
Echo::Echo(Channel* destination){
    destination_channel = destination;
}