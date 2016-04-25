#include <stdio.h>
int main (void){
 int m=0,n=0,side1=0,side2=0,hyp=0; 
 printf("This program calculates The Pythagorean triple, given two positive integers, m and n, where m > n\nValue for M:");
 scanf("%d",&m);
 printf("Value for N:");
 scanf("%d",&n);
 if (m>n){
  side1=(m*m)-(n*n);
  side2=2*m*n;
  hyp=(m*m)+(n*n);
  printf("Side 1 = %d\nSide 2 = %d\nHypotenuse = %d\n",side1,side2,hyp);
  return(0);
 }
 else{
  printf("M should be greater than N! You entered:\nM=%d\nN=%d\nQuiting...\n",m,n);
  return(1);
 }
}
