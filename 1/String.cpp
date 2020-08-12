#include"String.hpp"
#include<iostream>
using namespace std;
#define DOUBLE_QUOTATION "\""
#define STRING "string"
String::String(string string_value,string data_key) : Data(data_key){
    value = string_value;
    type = STRING;
}
void String::print(){
    cout<<DOUBLE_QUOTATION<<value<<DOUBLE_QUOTATION;
}