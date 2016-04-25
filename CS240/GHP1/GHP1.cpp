/*
Created by: 	Brodie Davis
Created: 	1/31/2016
Last Modified: 	1/31/2016

Language: C++
Intended Compiler: G++ on linux
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main (void) {
bool found = false;
int row = 0, 
    col = 0,
    num = 0,   // # to be searched for
    mrows = 5, // # of rows in matrix
    mcols = 5, // # of columns in matrix
    matrix [mrows][mcols],
    exit_code = 0; 

//Initialize 2D Array with random numbers, and print to screen
cout << "Random Number Matrix:\n";
cout << "   0  1  2  3  4\n  ---------------\n";//Column headers
for (row = 0; row < mrows; row++) {
  cout << row << "|";//row labels
  for (col = 0; col < mcols; col++) {
    matrix[row][col] = (rand() % 100); //set current array location to random number between 0 and 100
    cout << " " << matrix[row][col];   //print current array location's value
  }
  cout << endl;//newline to end row
}

//Prompt user for a number to search for
cout << "\nWhat number would you like to search for? Enter an Integer: ";
cin >> num;

//search for value (CORRECTED CODE)
row = 0; //reset row counter to 0
while ((!found) && (row < mrows)){
  col=0; //reset column counter to 0
  while ((!found) && (col < mcols)){
      if (matrix[row][col] == num) {
        cout << "\nValue " << num << " found in matrix!\n";
        found = true;
      }
      col++;
    }
    row ++;
}
//end corrected code

/*************************************************************
INCORRECT BECAUSE LOOP CONTINUES TO SEARCH AFTER FINDING VALUE
**************************************************************
//Search for specified value
for (row = 0; row < mrows; row++) {
  for (col = 0; col < mcols; col++) {
    if (matrix[row][col] == num) {
      cout << "\nValue " << num << " found in matrix!\nLocated in row " << row << " and column " << col << "\n";
      found = true;
    }
  }
}
*/

if ( !found ) {
  cout << "Value " << num << " was not found in Matrix! Sorry!" << endl;
  exit_code = 1;
}

return exit_code;  }//end of main
