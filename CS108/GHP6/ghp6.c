/*
C Programming Language
Written by Brodie Davis
Created 12/12/2015!
REVISION 1.0
Assignment GHP6
*/
/*-----------------------------------------------------------*/

int counter =0;//global variable used for debugging

//Preproccessor Commands
#include <stdio.h>

//Function Prototypes
int fx(int);

//Main Declaration
//Written by Brodie Davis
//Created 12/12/2015
/*
Function's Dictionary of  Variables
a is a starting value to pass to fx
result is the result of the function
//Function's Outputs
prints description of program and result.
*/
int main (void){
printf("\nAssignment: GHP6\nRecursive Function:\nf(x)=0\nif x<=0\nf(x) = f(x-1) + 2\n\nEnter integer to be calculated: ");

//variables
int a=0,result=0;

scanf("%d",&a);

result=fx(a);//call recursive function

printf("\nResult: %d\n",result);
return(0);
}

//fx Declaration
//PURPOSE: Recursive function to process f(x) = f(x-1) + 2
//AUTHOR: Brodie Davis
//DATE CREATED: 12/12/2015
//Function's Dictionary of  Variables
///x is input
///result is used to return the result of the calculations
//Function's Inputs
///input value from main function
int fx(int x){
int result=0;
//printf("\nfx round %d",++counter); //debugging statement, shows number of times function calls itself

if(x<=0)
result = 0;
else
result = fx(x-1)+2;	
return result;
}



