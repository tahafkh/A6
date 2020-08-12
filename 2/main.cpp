#include"SociableBots.hpp"
using namespace std;
#include<iostream>
int main(){
    SociableBots sociable_bots;
    string command;
    while(getline(cin,command)){
        sociable_bots.check_command(command);
    }
    return 0;
}