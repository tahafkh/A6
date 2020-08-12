#include"Array.hpp"
#include<iostream>
using namespace std;
#define OPENING_BRACKET "["
#define CLOSING_BRACKET "]"
#define COMMA ","
#define NEXT_LINE "\n"
#define ARRAY "array"
Array::Array(int array_id,string data_key ) : Container(data_key){
    id = array_id;
    type = ARRAY;
}
void Array::print(){
    cout<<OPENING_BRACKET;
    for(int i=0;i<datas.size();i++){
        cout<<NEXT_LINE;
        datas[i]->determine_tab_numbers();
        datas[i]->print();
        if(i!=datas.size()-1){
            cout<<COMMA;
        }
    }
    if(datas.size()){
        cout<<NEXT_LINE;
        determine_tab_numbers();
    }
    cout<<CLOSING_BRACKET;
}