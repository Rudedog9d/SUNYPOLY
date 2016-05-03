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
using namespace std;
#include "hash.h"

int main (void) {
bool found = false;
int i = 0,
    loc = 0,
    exit_code = 0;
string line = "";
Hash words; //create new Hash named words

//read in 15 words from user
cout << "Enter 15 words to be hashed, one per line." << endl;
for(i=0;i<15;i++){
    getline(cin,line);
    //if line is empty, don't accept
    if(line > "")
        words.store(line);
    else
        cout << "Not a valid entry!\n";
}

//display entire hash
words.display_all();

//allow user to search for words
cout << "Enter words to search for, one per line. Enter \"stop\" to end program \n";
while(line != "stop"){
    getline(cin,line);
    if(line != "stop"){
        loc = words.find(line);
        if(loc < 0)
            cout << "\"" << line << "\" was not found!\n";
        else
            cout << "\"" << line << "\" was found at location " << loc << endl;
    }

}

return exit_code;  }//end of main
