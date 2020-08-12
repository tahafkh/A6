#include<iostream>
#include"JsonBuilder.hpp"
#include"String.hpp"
#include"Integer.hpp"
#include"Object.hpp"
#include"Array.hpp"
#include"InvalidId.hpp"
#include"UndefinedType.hpp"
#define OBJECT "object"
#define ARRAY "array"
#define MIN_ID 0
#define MIN_DEPTH_LEVEL 0
#define NEXT_LINE "\n"
using namespace std;
int JsonBuilder::generate_id(){
    return unique_root_id++;
}
Data* JsonBuilder::find_data_with_selected_id(int parent_id,string data_type){
    for(int i=0;i<total_datas.size();i++){
        if(total_datas[i]->get_id() == parent_id && total_datas[i]->get_type()==data_type && parent_id >= MIN_ID){
            return total_datas[i];
        }
    }
    throw InvalidId();
}
void JsonBuilder::addIntegerToObject(int parent_id,string key,int value){
    Data* parent_data = find_data_with_selected_id(parent_id,OBJECT);
    Object* parent_object = dynamic_cast<Object*> (parent_data);
    parent_object->check_duplicate_key(key);
    total_datas.push_back(new Integer(value,key));
    parent_object->add_data(total_datas.back());
}
void JsonBuilder::addStringToObject(int parent_id,string key,string value){
    Data* parent_data = find_data_with_selected_id(parent_id,OBJECT);
    Object* parent_object = dynamic_cast<Object*>(parent_data);
    parent_object->check_duplicate_key(key);
    total_datas.push_back(new String(value,key));
    parent_object->add_data(total_datas.back());
}
int JsonBuilder::addContainerToObject(int parent_id,string key,string type){
    Data* parent_data = find_data_with_selected_id(parent_id,OBJECT);
    Object* parent_object = dynamic_cast<Object*>(parent_data);
    parent_object->check_duplicate_key(key);
    if(type == OBJECT){
        total_datas.push_back(new Object(generate_id(),key));
    }
    else if(type == ARRAY){
        total_datas.push_back(new Array(generate_id(),key));
    }
    else{
        throw UndefinedType();
    }
    parent_object->add_data(total_datas.back());
    return total_datas.back()->get_id();
}
void JsonBuilder::addStringToArray(int parent_id,string value){
    Data* parent_data = find_data_with_selected_id(parent_id,ARRAY);
    Array* parent_array = dynamic_cast<Array*>(parent_data);
    total_datas.push_back(new String(value));
    parent_array->add_data(total_datas.back());
}
void JsonBuilder::addIntegerToArray(int parent_id,int value){
    Data* parent_data = find_data_with_selected_id(parent_id,ARRAY);
    Array* parent_array = dynamic_cast<Array*>(parent_data);
    total_datas.push_back(new Integer(value));
    parent_array->add_data(total_datas.back());
}
int JsonBuilder::addContainerToArray(int parent_id,string type){
    Data* parent_data = find_data_with_selected_id(parent_id,ARRAY);
    Array* parent_array = dynamic_cast<Array*>(parent_data);
    if(type == OBJECT){
        total_datas.push_back(new Object(generate_id()));
    }
    else if(type == ARRAY){
        total_datas.push_back(new Array(generate_id()));
    }
    else{
        throw UndefinedType();
    }
    parent_array->add_data(total_datas.back());
    return total_datas.back()->get_id();
}
void JsonBuilder::print(int id){
    Data* selected_data = find_data_with_selected_id(id,OBJECT);
    selected_data->print();
    cout<<NEXT_LINE;
}
JsonBuilder::JsonBuilder(){
    unique_root_id = MIN_ID;
    total_datas.push_back(new Object(generate_id()));
    total_datas.back()->set_depth_level(MIN_DEPTH_LEVEL);
}
JsonBuilder::~JsonBuilder(){
    for(int i=0;i<total_datas.size();i++){
        delete total_datas[i];
    }
}