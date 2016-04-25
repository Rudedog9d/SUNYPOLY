/*
Created by: 	Brodie Davis
Created: 	1/31/2016
Last Modified: 	2/19/2016
MODIFIED FROM GHP1.cpp, author Brodie Davis

Language: C++
Intended Compiler: G++ on linux
*/

#include <iostream>

using namespace std;


//main function
int main (void) {
int row = 0, 
    col = 0,
    m = 20, // # of MAX rows in matrix
    n = 20, // # of MAX columns in matrix
    array1 [m][n],
    array2 [m][n],
    sum [m][n],
    exit_code = 0; 
//cout << "num in" << endl;
//cin >> matrix[0][0];
//cout << matrix[0][0];

//enter size of arrays
cout << "How big should the arrays be? MAX of 20x20!\nNumber of Rows:";
cin >> m;
cout << "Number of Columns:";
cin >> n;

//enter values for array1
for (row = 0; row < m; row++) {
  for (col = 0; col < n; col++) {
    cout << "Value for array1[" << row << "][" << col << "]: ";
    cin >> array1[row][col];
  }
}

//enter values for array2
for (row = 0; row < m; row++) { 
  for (col = 0; col < n; col++) {
    cout << "Value for array2[" << row << "][" << col << "]: ";
    cin >> array2[row][col];
  }
}

//sum array1 and array2
for (row = 0; row < m; row++) {
  for (col = 0; col < n; col++) {
    sum[row][col]=array1[row][col]+array2[row][col];
  }
}

//print arrays
cout << "Array 1:\n";
for (row = 0; row < m; row++) {
  for (col = 0; col < n; col++) {
    cout << array1[row][col] << " ";
  }
 cout << endl;
}

cout << "\nArray 2:\n";
for (row = 0; row < m; row++) {
  for (col = 0; col < n; col++) {
    cout << array2[row][col] << " ";
  }
 cout << endl;
}

cout << "\nSum of Array 1 and Array 2:\n";
for (row = 0; row < m; row++) {
  for (col = 0; col < n; col++) {
    cout << sum[row][col] << " ";
  }
 cout << endl;
}


return exit_code;  }//end of main
