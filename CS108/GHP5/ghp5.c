//C Programming Language
//Written by Brodie Davis
//Created 11 NOV 2015
//REVISION 1.1

//Preproccesor Commands
#include <stdio.h>
#include <math.h>

//Prototypes
int input(int *, int *);
void initialize_array(int *,int);
void print_table2(int);

/****Main Declaration*****
Written by Brodie Davis
Created 8 NOV 2015
Function's Dictionary of  Variables
 x,y,z are arrays of size 20. x and y are inputed by user,
   up to 20 numbers while z stores the sum of x and y
 z_sum stores sum of the values in array z
 z_square stores the result of squaring z_sum
Function's Outputs
  Displays contents of x, y, and z 
  in table form using function print_table2
*/
int main (void){

//Variable Declarations
int x[20],y[20],z[20],i,n=0,z_sum=0;
float z_square=0.0;

//Sets all values in array's to 0
initialize_array(x,20);
initialize_array(y,20);
initialize_array(z,20);

n=input(x,y);//allows inputing of array x and y

for(i=0;i<n;i++)//Store's product of array x and array y in array z
  z[i]=x[i]*y[i];

for(i=0;i<n;i++)//For loop to sum up values in array z
  z_sum+=z[i];

z_square=sqrt(z_sum);//Stores squareroot of z_sum in z_square

//Set up table Headers
printf("\n\n\nValues of X, Y, and Z:\n|    X    |    Y    |    Z    |\n");
for(i=0;i<n;i++){//For loop to print value of each array
  print_table2((int)x[i]);
  print_table2((int)y[i]);
  print_table2((int)z[i]);
  printf("|\n");//Final column in table output; also supplies newline
}

if(z_sum<0)//Protection against printing squareroot error in case of negative z_sum
 //print sum and squareroot warning
 printf("\nSum of Values in Z: %d\nSince sum is a negative number,\nSquare root of values in Z is a\nnon-real number. Can't compute.\n\n",z_sum);
else
 //print sum and square root of z
 printf("\nSum of Values in Z: %d\nSquare Root of Sum of Values in Z: %.2f\n\n",z_sum,z_square);


return(0);//return success to system
}

/****Input Declaration****
PURPOSE: input values to array's x and y
AUTHOR: Brodie Davis
DATE CREATED: 9 Nov 2015
Function's Dictionary of  Variables
 i is counter for array1, n is counter for array2
Function's Inputs
 array1 and array2 represent pointers to the two arrays to be inputed
Function's Outputs
 returns # of values inputed to each array
*/
int input(int array1[20],int array2[20]){
 int i=0,n=0,in=0;
 while (in > -12345 && i<20){//input while !=sentinal and less than 20 #'s
  printf("\nPlease input an intger for array 1, up to 20 #'s.\nInput stops after 20 #'s. Current Number:%d of 20 \nEnter -12345 or less to finish input loop: ",(i+1));
  scanf("%d",&in);
  if(in >-12345){//Prevents sentinal from being stored and incremeting i
   array1[i]=in;
   i++;
   }
 }
 for(n=0;n<i;n++){//input second array, limited to number of values input in first array
  printf("\nPlease input an intger for array 2. Value #%d of %d:  ",(n+1),(i));//n+1 so user is not confused by "enter value 0 of x"
  scanf("%d",&array2[n]);
 }
return i;//return number of items in the two array's
}


/*****initialize_array Declaration*****
PURPOSE: Set all values in an array to zero
AUTHOR: Brodie Davis
DATE CREATED: 10 NOV 2015
Function's Dictionary of  Variables
 i - just a counter variable
Function's Inputs
 array is the array being inputed
 length is the number of values in the array to be set to zero
*/
void initialize_array(int array[],int length){
 int i=0;
 for(i=0;i<length;i++)
  array[i]=0;
}

/*****print_table2 Declaration*****
PURPOSE: Prints value based on length of value to a table format.
AUTHOR: Brodie Davis
DATE CREATED: 11 NOV 2015
Function's Inputs
 num - number to be printed
*/
/***(for future use)***
NOTE! Needs some special care when calling. Example code:

//set up headers
printf("\n\n\nValues of X, Y, and Z:\n|    X    |    Y    |    Z    |\n");
for(i=0;i<n;i++){//For loop to print value of each array
  print_table2((int)x[i]);
  print_table2((int)y[i]);
  print_table2((int)z[i]);
  printf("|\n");//Final column in table output; also supplies newline
}

*/
void print_table2(int num){

  if(num<10)
   printf("|    %d    ",num);//1
  else if(num<100)
   printf("|   %d    ",num);//12
  else if(num<1000)
   printf("|   %d   ",num);//123
  else if(num<10000)
   printf("|  %d   ",num);//1234
  else if(num<100000)
   printf("|  %d  ",num);//12345
  else if(num<1000000)
   printf("| %d  ",num);//123456
  else if(num<10000000)
   printf("| %d ",num);//1234567
  else if(num<100000000)
   printf("| %d",num);//12345678
  else 
   printf("|%d",num);//123456789+
}
