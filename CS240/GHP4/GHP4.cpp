/*
Created by: 	Brodie Davis
Created: 	
Last Modified: 	

Language: C++
Intended Compiler: G++ on linux
*/

#include <iostream>
using namespace std;

#include "Stack.h"

int main (void) {
int n = 0,
    d = 2,
    exit_code = 0; 

Stack numbers;//create stack object 

cout << "Input an integer greater than 1 for n: ";
cin >> n;

if( n <= 1 ){ // Error handling if statement
    cout << "n is invalid! Must be > 1, you entered: " << n << endl;
    exit_code = 1;
} else {

    while( n > 1 ) {    //while number in valid range
        if( n % d == 0 ) {  //check if number is divisible by current smallest factor
            n = n/d;        //if divisible, divide number by value of factor
            numbers.push(d); //push the factor to stack numbers
        } else {
            d++;            //if number was not divisible by factor, increment the factor by 1
        }//end if else
    }//end while number in valid range

    while(! numbers.empty()){   //while the stack still has objects...
        cout << numbers.top() << " ";   //print number on top of stack
        numbers.pop();  //pop number of top of stack because it has already been used
    }//end print while loop

    cout << endl; //extra endline to fix terminal
} // end error handling if

return exit_code;  }//end of main
