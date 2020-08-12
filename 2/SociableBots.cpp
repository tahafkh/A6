#include"SociableBots.hpp"
#include"Echo.hpp"
#include"Fred.hpp"
#include"Librarian.hpp"
#include"Logger.hpp"
#include"UnavailableChannel.hpp"
#include"AvailableChannel.hpp"
#include"DuplicateChannel.hpp"
using namespace std;
#define SPACE_SEPERATOR ' '
#define ADD_BOT "add_bot"
#define ADD_CHANNEL "add_channel"
#define TELL "tell"
#define ECHO "echo"
#define LOGGER "logger"
#define LIBRARIAN "librarian"
#define FRED "fred"
#include<iostream>
void SociableBots::check_command(string command){
    try{
        stringstream command_section(command);
        string command_type;
        getline(command_section,command_type,SPACE_SEPERATOR);
        if(command_type == ADD_BOT){
            add_bot(command_section);
        }
        else if(command_type == ADD_CHANNEL){
            add_channel(command_section);
        }
        else if(command_type == TELL){
            tell_channel(command_section);
        }
    }catch(exception& program_exception){
        cout<<program_exception.what()<<endl;
    }
}
Channel* SociableBots::find_channel(string channel_name){
    for(int i=0;i<total_channels.size();i++){
        if(total_channels[i]->get_name() == channel_name){
            return total_channels[i];
        }
    }
    return NULL;
}
void SociableBots::add_bot(stringstream& bot_command){
    string bot_type;
    getline(bot_command,bot_type,SPACE_SEPERATOR);
    if(bot_type == ECHO){
        add_echo(bot_command);
    }
    else if(bot_type == LOGGER){
        add_logger(bot_command);
    }
    else if(bot_type == FRED){
        add_fred(bot_command);
    }
    else if(bot_type == LIBRARIAN){
        add_librarian(bot_command);
    }
}
void SociableBots::add_echo(stringstream& echo_command){
    string source,destination;
    getline(echo_command,source,SPACE_SEPERATOR);
    getline(echo_command,destination);
    if(source == destination){
        throw DuplicateChannel();
    }
    Channel* source_channel = find_channel(source);
    Channel* destination_channel = find_channel(destination);
    if(source_channel==NULL || destination_channel == NULL){
        throw UnavailableChannel();
    }
    total_bots.push_back(new Echo(destination_channel));
    source_channel->subscribe_bot(total_bots.back());
}
void SociableBots::add_logger(stringstream& logger_command){
    string filename;
    getline(logger_command,filename);
    total_bots.push_back(new Logger(filename));
    for(int i=0;i<total_channels.size();i++){
        total_channels[i]->subscribe_bot(total_bots.back());
    }
}
void SociableBots::add_fred(stringstream& fred_command){
    string source;
    getline(fred_command,source);
    Channel* source_channel = find_channel(source);
    if(source_channel == NULL){
        throw UnavailableChannel();
    }
    total_bots.push_back(new Fred);
    source_channel->subscribe_bot(total_bots.back());
}
void SociableBots::add_librarian(stringstream& librarian_command){
    string source;
    getline(librarian_command,source);
    Channel* source_channel = find_channel(source);
    if(source_channel == NULL){
        throw UnavailableChannel();
    }
    total_bots.push_back(new Librarian);
    source_channel->subscribe_bot(total_bots.back());
}
void SociableBots::add_channel(stringstream& channel_command){
    string channel_name;
    getline(channel_command,channel_name);
    Channel* available_channel = find_channel(channel_name);
    if(available_channel != NULL){
        throw AvailableChannel();
    }
    total_channels.push_back(new Channel(channel_name));
}
void SociableBots::tell_channel(stringstream& channel_command){
    string channel_name , message;
    getline(channel_command,channel_name,SPACE_SEPERATOR);
    getline(channel_command,message);
    Channel* selected_channel = find_channel(channel_name);
    if(selected_channel == NULL){
        throw UnavailableChannel();
    }
    selected_channel->get_new_message(message);
}
SociableBots::~SociableBots(){
    for(int i=0;i<total_channels.size();i++){
        delete total_channels[i];
    }
    for(int i=0;i<total_bots.size();i++){
        delete total_bots[i];
    }
}