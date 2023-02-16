// some of my comments are sort of redundant

#include <iostream>
#include "logic.hpp"
#include <string>
#include <vector>

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
	}
	// create milisecond, then ask user for delay.
	int ms;
	std::cout << "enter delay (in miliseconds)" << std::endl;
	std::cin >> ms;
	
	// assign text to print int str.
	vector<string> str = get_text("files/" + filename);
	print_text(str, ms);
	return 0;
}
