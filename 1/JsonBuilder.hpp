#ifndef __JSON_BUILDER_H__
#define __JSON_BUILDER_H__
#include"Data.hpp"
#include <string>
#include<vector>
class JsonBuilder
{
    public:
        JsonBuilder();
        ~JsonBuilder();
        int generate_id();
        void addStringToObject(int parent_id, std::string key, std::string value);
        void addIntegerToObject(int parent_id, std::string key, int value);
        int addContainerToObject(int parent_id, std::string key, std::string type);
        void addStringToArray(int parent_id, std::string value);
        void addIntegerToArray(int parent_id, int value);
        int addContainerToArray(int parent_id, std::string type);
        void print(int id);
    private:
        int unique_root_id;
        Data* find_data_with_selected_id(int parent_id,std::string data_type);
        std::vector<Data*> total_datas;
};

#endif 