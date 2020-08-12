#include"Container.hpp"
void Container::add_data(Data* new_data){
    new_data->set_depth_level(depth_level + 1);
    datas.push_back(new_data);
}