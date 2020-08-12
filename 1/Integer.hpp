#ifndef INTEGER_H 
#define INTEGER_H "INTEGER_H"
#include"Data.hpp"
#define NOT_AN_ID -1
class Integer : public Data {
public:
    Integer(int int_value,std::string data_key = EMPTY_KEY);
    void print();
    int get_id(){ return NOT_AN_ID;}
private:
    int value;
};
#endif