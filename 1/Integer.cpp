#include"Integer.hpp"
using namespace std;
#include<iostream>
#define INTEGER "integer"
Integer::Integer(int int_value,string data_key ) : Data(data_key){
    value = int_value;
    type = INTEGER;
}
void Integer::print(){
    cout<<value;
}