// Some comments may be redundant

#ifndef logichpp // defining import library 
#define logichpp


// importing required libraries
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unistd.h>
#include <vector>

using namespace std;

// file retrieving function
vector<string> get_text(string filename) {
	ifstream f(filename); //taking file as inputstream
  	string str;// initialise string
	vector<string> returnable; // initialise vector
	
  	if (f) { // check if operation was successful
    		ostringstream ss; 
    		ss << f.rdbuf(); // reading data
    		str = ss.str();
  	} else { //  if operation failed
	  string full_error = std::string("file ") + filename + std::string(" not found!"); // turns all important information into a single string using "std::string to allow concatanation."
	  returnable.push_back(full_error); 

	  return returnable;
	}
	
	// split string into a vector
	stringstream adjstr(str);
	string token;
	while(getline(adjstr, token)) {
		returnable.push_back(token);
	}
	return returnable;
}

// printing function
void print_text(vector<string> &str, int msec) {
  // print forever
  while (1 == 1) {
    for (int i = 0; i < str.size(); i ++) {
      std::cout << str[i] << std::endl;
      usleep(msec);
    }
  }
}

#endif
