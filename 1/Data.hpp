#ifndef DATA_H
#define DATA_H "DATA_H"
#include<string>
#define EMPTY_KEY ""
class Data{
public:
    std::string get_type(){ return type;}
    std::string get_key(){ return key;}
    void set_depth_level(int data_depth_level){ depth_level = data_depth_level;}
    Data(std::string data_key=EMPTY_KEY);
    virtual void print () = 0;
    virtual int get_id() = 0;
    void determine_tab_numbers();
protected:
    std::string key;
    std::string type;
    int depth_level;
};
#endif