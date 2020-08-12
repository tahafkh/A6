#ifndef OBJECT_H
#define OBJECT_H "OBJECT_H"
#include"Container.hpp"
class Object : public Container {
public:
    Object(int object_id,std::string data_key = EMPTY_KEY);
    void check_duplicate_key(std::string new_data_key);
    void print();
};
#endif