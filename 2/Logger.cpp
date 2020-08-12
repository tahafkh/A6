#include"Logger.hpp"
#include"Channel.hpp"
#include<fstream>
using namespace std;
void Logger::notify(Channel* subscribed_channel){
    ofstream output_file;
    output_file.open(filename,ios_base::app);
    output_file<<subscribed_channel->show_latest_message()<<endl;
}