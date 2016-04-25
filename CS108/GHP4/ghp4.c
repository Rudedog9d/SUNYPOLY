//C Programming Language
//Written by Brodie Davis
//Created 10/26/2015
//REVISION 1.0

//Preproccessor Commands
#include <stdio.h>

//Dictionary of Global Variables
///All variables declared here are declared globally for use between functions
///high,pleasant,cold count variables count the number of days for each category
///all_count variable tracks total number of days
///high,pleasant,cold total variables track the sum of the temperatures of the appropiate days for averaging purposes
///all total tracks the sum of all temperatures for averaging purposes
int high_count=0,pleasant_count=0,cold_count=0,all_count=0;
int high_total=0,pleasant_total=0,cold_total=0,all_total=0;

//Prototypes
void sorter(int);
float averager(int, int);

//Main Declaration
//Written by Brodie Davis
//Created 10/26/2015
//Function's Dictionary of  Variables
///Variable input is used in the input loop for the user to enter raw data
///Variable Exit loop is used to set a value to exit the input loop
///Average variables are declared as floats incase numbers return as floats; averages are printed as integers
//Function's Inputs
/// Input raw temperature data from the user
//Function's Outputs
/// Input loop prints input instructions to screen
/// prints average temperatures and number of days in each category at end
int main (void){

  int input=0, exitloop=999;
  float high_avg=0,pleasant_avg=0,cold_avg=0,all_avg=0;

  while (input != exitloop){//Input loop
  printf("Please input a temperature as an INTEGER, or enter %d to exit loop:\n", exitloop);
  scanf("%d", &input);//end input loop
  if (input != exitloop)//if statement to prevent exit value from being calculated
  sorter(input);//Sends input to be caluclated and stored
 }
//Next 4 lines calulate average temperatures for categories
high_avg=averager(high_count,high_total);
pleasant_avg=averager(pleasant_count,pleasant_total);
cold_avg=averager(cold_count,cold_total);
all_avg=averager(all_count,all_total);
//Next 4 lines print number of days and average temperatures in each category
printf("Number of Hot Days:%d\nAverage Temperature of Hot Days: %3.0f\n",high_count,high_avg);
printf("Number of pleasant Days:%d\nAverage Temperature of pleasant Days:%3.0f\n",pleasant_count,pleasant_avg);
printf("Number of cold Days:%d\nAverage Temperature of cold Days:%3.0f\n",cold_count,cold_avg);
printf("Number of Days:%d\nAverage Temperature of all Days:%3.0f\n",all_count,all_avg);
return(0);
}
//sorter Declaration
//PURPOSE: Sort temperatures into Hot, Pleasant, or Cold days.
//AUTHOR: Brodie Davis
//DATE CREATED: 10/26/2015
//Function's Dictionary of  Variables
///Variable in is the input value from the main function
//Function's Inputs
///Variable "in" comes from variable "input" in main function
//Function's Outputs
///Prints temperature category to the screen
void sorter(int in){
 if(in >= 85){//checks if temperature input meets requirements for a hot day
  high_count++;
  printf("%d is a hot temperature.\n",in);
  high_total+=in;
 } else if(in >= 60) {//checks if temperature input meets requirements for a Pleasant day - aleady failed check for hot
  pleasant_count++;
  printf("%d is a pleasant temperature.\n",in);
  pleasant_total+=in;
 } else {//If the temperature is not considered hot or pleasant, it must be a cold day
  cold_count++;
  printf("%d is a cold temperature.\n",in);
  cold_total+=in;
 }
all_count++;
all_total+=in;
}

//Averager Declaration
//PURPOSE: General Averaging Function
//AUTHOR: Brodie Davis
//DATE CREATED: 10/26/2015
//Function's Dictionary of  Variables
///Parameter count should be number of values to average from
///Parameter total should be the sum of all the numbers
///Variable average is a variable to hold the average to return after calculations
//Function's Inputs
///No User inputs
//Function's Outputs
///Returns average
float averager(int count, int total){
 float average;
 if (count != 0)
 average = total/count;
 return average;
}




