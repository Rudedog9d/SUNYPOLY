/*
Created by: 	Brodie Davis
Created:        4/16/2016
Last Modified: 	4/20/2016
GHP6
Description:
    The Rinky Dooflingy Company records the number of cases of dooflingies produced each day over a four-week period.  Write a program that reads these production levels and stores them in a container.  

    The program should then find and display:

    a.  the lowest, highest, and average daily production levels

    b.  a sequence that shows how much the production level rose or fell each day

    c.  A sequence that shows for each day the total number of dooflingies produced up to and including that day.
Language: C++
Intended Compiler: G++ on linux
*/

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;

int main (void) {
bool found = false;
int i = 0,
    tmp = 0,
    sum = 0,
    p_size = 0,
    avg = 0,
    exit_code = 0; 
vector<int> production;
vector<int>::iterator min;
vector<int>::iterator max;

//read in data
cout << "Enter integers, one number per line, with each integer representing one day \nof production of dooflingies over a 4 week period. Enter negative number to quit:\n";
while(tmp >= 0){
    cin >> tmp;
    if (tmp >= 0)
        production.push_back(tmp);
}

//get most values from standard algorithms
min = min_element(production.begin(), production.end()); //find min element
max = max_element(production.begin(), production.end()); //find max element
sum = accumulate(production.begin(), production.end(), 0.0); //find sum of elements
avg = sum / production.size(); //calculate average
//create new dynamic arrays to store differences between days and partial sum of production based on size of vector
int diff[production.size()],
    psum[production.size()];
adjacent_difference(production.begin(), production.end(), diff); //calculate production differences between days and store in diff
partial_sum(production.begin(), production.end(), psum);


//print overall values
cout << "\nOVERALL VALUES:\nLowest prodcution: " << *min << "\nHighest Production: " << *max << "\nAverage Production: " << avg << "\n\n";

//print daily value
for(i=0;i < production.size(); i++){
    cout << "DAY " << i+1 << endl;
    if(diff[i] > 0)
        cout << "Production is up from day " << i << " by " << diff[i] << endl;
    else if(diff[i] < 0)
        cout << "Production is down from day " << i << " by " << diff[i]*-1 << endl;
    else
        cout << "No change in production from day " << i << endl;
    cout << "Production to date: " << psum[i] << "\n\n";
}

return exit_code;  }//end of main
