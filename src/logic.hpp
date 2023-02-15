// Some comments may be redundant

#ifndef logichpp // defining import library 
#define logichpp


// importing required libraries
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <unistd.h>
using namespace std;

// file retrieving function
string get_text(string filename) {
	ifstream f(filename); //taking file as inputstream
  	string str;// initialise string
	
  	if (f) { // check if operation was successful
    		ostringstream ss; 
    		ss << f.rdbuf(); // reading data
    		str = ss.str();
  	} else { //  if operation failed
	  return "没有找到！"; // written in chinese to decrease likelihood of it cancelling because of an actual file
	}
	return str;
}



#endif
