/*
C Programming Language
Written by Brodie Davis
Created 12/12/2015!
REVISION 1.0
Assignment GHP6
*/
/*-----------------------------------------------------------*/

int counter =0;
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
printf("\nAssignment: GHP6\nRecursive Function:\nf(x)=0\nif x<=0\nf(x) = f(x-1) + 2\n");

int a=0,result=0;

result=fx(a);

printf("\nResult: %d\n",result);
return(0);
}

//fx Declaration
//PURPOSE: Recursive function to process f(x) = f(x-1) + 2
//AUTHOR: Brodie Davis
//DATE CREATED: 12/12/2015
//Function's Dictionary of  Variables
///
//Function's Inputs
///
//Function's Outputs
///
int fx(int x){
int result=0;
printf("\nfx round %d",++counter);

if(x<=0){
printf("\nx=%d",x);
x=(fx(x-1+2));
}

return result;
}

//f(int x){






