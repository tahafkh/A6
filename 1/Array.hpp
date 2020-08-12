#ifndef ARRAY_H
#define ARRAY_H "ARRAY_H"
#include"Container.hpp"
class Array : public Container {
public:
    Array(int array_id,std::string data_key = EMPTY_KEY);
    void print();
};
#endif