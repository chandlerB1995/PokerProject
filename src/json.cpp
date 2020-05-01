#include <iostream>
#include <chrono>
#include <ctime>
#include "json.hpp"

int main(int argc,char *argv[])
{
    auto start = std::chrono::system_clock::now();
	std::time_t et = std::chrono::system_clock::to_time_t(start);
	std::string x= std::ctime(&et);
	std::cout<< "{\"chrono\":\" "<<x<<+"\",\"id\": 1001633209,\"name\": \"Sumiran\""<< "} s ";
    return 0;
}
