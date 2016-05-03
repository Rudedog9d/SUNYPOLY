/*
Created by: 	Brodie Davis
Created: 	    4/21/2016
Last Modified: 	4/21/2016

Requirements:
  a. query the user for fifteen words and store them using the hash technique described above.

  b. print out the contents of each position of the array (or vector, deque, or whatever you used), showing vacant as well as filled positions.  Remember, only 15 of the 23 positions will be filled.

  c. repeatedly query the user for a target word, hash the word, check for its inclusion in the list of stored words, and report the result.  Continue doing this task until the user signals to stop (establish a sentinel condition).

Language: C++
Intended Compiler: G++ on linux
*/

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;
#include "hash.h"

int main (void) {
bool found = false;
int i = 0,
    exit_code = 0;
string line = "";
Hash words;
cout << "Enter 15 words to be hashed, one per line" << endl;
while(i < 15 && line != "stop"){
    getline(cin,line);
    //cout << line << endl;
    words.store(line);
}
words.display_all();

cout << endl;
return exit_code;  }//end of main
