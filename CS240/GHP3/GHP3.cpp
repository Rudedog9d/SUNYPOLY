/*
Created by: 	Brodie Davis
Created: 	    March 2nd 2016 
Last Modified: 	March 14nd 2016

Language: C++
Intended Compiler: G++ on linux
*/

#include <iostream>
#include <fstream>
#include <ctype.h>

using namespace std;

int main (void) {
int     count[5] = {0,0,0,0,0},
        j = 0,
        i = 0,
        exit_code = 0,
        total_vowels = 0;
string  line = "",
        filename = "";
char vowels[5] = {'a','e','i','o','u'};

//input filename
cout << "Enter File with text to import (Must be from current working directory!):\n";
cin >> filename; 
//open file
ifstream myFile((filename).c_str());

//do file stuff
if (myFile.is_open())
{
    while ( getline (myFile,line) )
    {
        for (i=0;i<line.length(); i++){
            //cout << line[i] << endl;
            for (j=0;j<5;j++)
            {
                if ( tolower(line[i]) == vowels[j] )
                    count[j]++;
            }
        }
    }
    myFile.close();
            for (j=0;j<5;j++)
            {
                cout << "Number of " << vowels[j] << " (UPPER and lower)  in " << filename << ": " << count[j] << endl;
                total_vowels += count[j];
            }
cout << "\n\nTotal number of vowels: " << total_vowels << endl;
} else
{
    cout << "Could not open file!\n\nExiting.....\n";
}

return exit_code;  }//end of main
