// some of my comments are sort of redundant

#include <iostream>
#include "logic.hpp"
#include <string>
// create a namespace for the file system
namespace fs = std::filesystem;

int main() {
	// create filename, then put filename inside of it.
	string filename;
	std::cout << "enter filename or type \"list\" for a list of all files." << std::endl;
	std::cin >> filename;
	
	// determine if user wants to list all the files
	if (filename == "list") {
		std::string path = "./files"; // lists all files in the "files" directory
		for (const auto & entry : fs::directory_iterator(path))
		std::cout << entry.path() << std::endl;
		return 1;
	} else if (filename == "没有找到！") { 
		std::cout << "file not found!" << std::endl; // determines whether file is not found`
		return 0;
	}
	// create milisecond, then ask user for delay.
	int ms;
	std::cout << "enter ms delay" << std::endl;
	std::cin >> ms;
	
	// assign text to print int str.
	string str = get_text("files/" + filename);
	// print text forever
	while (1 == 1) {
		for (int i = 0; i < str.size(); i ++) {
			std::cout << str[i]; 
			usleep(ms);
		}
	}
	return 0;
}
