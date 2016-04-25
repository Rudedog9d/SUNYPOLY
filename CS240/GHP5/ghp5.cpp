/*
Created by: 	Brodie Davis
Created: 	    4/4/2016
Last Modified: 	4/4/2016

GHP5
Language: C++
Intended Compiler: G++ on linux
*/

#include <iostream>
using namespace std;
//#include <string>
#include "Stack.h"
#include "Queue.h"

int main (void) {
bool palindrome = true;
int i = 0,
    exit_code = 0; 
string word = "";
Stack stack;
Queue queue;

//read string
cout << "Enter a word and press enter\n";
cin >> word;

//push string to stack/queue
for (i=0; i < word.length(); i++) {
    //push to stack
    stack.push(word[i]);
    //place on queue
    queue.enqueue(word[i]);
}

//check if palindrome
while (!stack.empty() & !queue.empty() & palindrome) {//while stack and queue aren't empty AND word has chance to be a palindrome
    if (stack.top() == queue.front()) {
        stack.pop();
        queue.dequeue();
    } else
        palindrome = false;
}

//print results
if (palindrome)
    cout << word << " is a palindrome";
else
    cout << word << " is not a palindrome";

cout << endl;//endl to reset prompt
return exit_code;  }//end of main
