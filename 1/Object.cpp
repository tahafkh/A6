#include"Object.hpp"
#include<iostream>
using namespace std;
#define COMMA ","
#define NEXT_LINE "\n"
#define DOUBLE_QUOTATION "\""
#define OPENING_BRACE "{"
#define CLOSING_BRACE "}"
#define OBJECT "object"
#define COLON ":"
#define COMMA ","
#define SPACE " "
#include"DuplicateKey.hpp"
Object::Object(int object_id,string data_key) : Container(data_key){
    id = object_id;
    type = OBJECT;
}
void Object::print(){
    cout<<OPENING_BRACE;
    for(int i=0;i<datas.size();i++){
        cout<<NEXT_LINE;
        datas[i]->determine_tab_numbers();
        cout<<DOUBLE_QUOTATION<<datas[i]->get_key()<<DOUBLE_QUOTATION<<COLON<<SPACE;
        datas[i]->print();
        if(i!=datas.size()-1){
            cout<<COMMA;
        }
    }
    if(datas.size()){
        cout<<NEXT_LINE;
        determine_tab_numbers();
    }
    cout<<CLOSING_BRACE;
}
void Object::check_duplicate_key(string new_data_key){
    for(int i=0;i<datas.size();i++){
        if(datas[i]->get_key() == new_data_key){
            throw DuplicateKey();
        }
    }
}