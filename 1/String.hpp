#ifndef STRING_H
#define STRING_H "STRING_H"
#include"Data.hpp"
#define NOT_AN_ID -1
class String : public Data {
public:
    String(std::string string_value,std::string data_key = EMPTY_KEY);
    void print();
    int get_id(){ return NOT_AN_ID;}
private:
    std::string value;
};
#endif