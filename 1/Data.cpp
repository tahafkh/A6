#include"Data.hpp"
#include<iostream>
using namespace std;
#define SPACES_PER_TAB 4
#define SPACE " "
Data::Data(string data_key){
    key = data_key;
}
void Data::determine_tab_numbers(){
    for(int i=0;i<depth_level;i++){
        for(int j=0;j<SPACES_PER_TAB;j++){
            cout<<SPACE;
        }
    }
}