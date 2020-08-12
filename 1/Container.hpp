#ifndef CONTAINER_H
#define CONTAINER_H "CONTAINER_H"
#include"Data.hpp"
#include<vector>
class Container : public Data{
public:
    Container(std::string data_key = EMPTY_KEY) : Data(data_key){};
    void add_data(Data* new_data);
    int get_id(){ return id;}
protected:
    int id;
    std::vector<Data*> datas;
};
#endif