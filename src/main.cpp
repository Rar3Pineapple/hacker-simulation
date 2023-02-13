#include <iostream>
#include "logic.hpp"
#include <string>

int main() {
	string str = get_text("files/javascript");
	cout << str << endl;
	for (int i = 0; i < str.size(); i ++) {
		std::cout << str[i]; 
		usleep(200);
	}
	return 0;
}
