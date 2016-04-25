//C Programming Language
//Written by Brodie Davis
//Created October 9th, 2015
//Last edited October 16th, 2015 
//ASSIGNMENT DESCRIPTION: 
//Write a program that calculates the user’s body mass index (BMI) and categorizes it as underweight, normal, overweight, or obese, based a table from the United States Centers for Disease Control.
//
//----------Begin Program------------------------------------------------

//Preproccessor Commands
#include <math.h> 
#include <stdio.h>
#define Underweight 18.5
#define Normal 25
#define Overweight 30

//Prototypes
float calc (float, float);

//main function
int main (void){

//Variables
float weight = 0.0, height = 0.0, BMI = 0.0;

  printf("Please enter your weight in pounds: ");
  scanf("%f",&weight);  
  printf("Please enter your height in inches: ");
  scanf("%f",&height);
  BMI=calc(weight, height);
  printf("\n\nYour BMI is %2.1f, you are considered ",BMI);
  if(BMI<Underweight){
    printf("Underweight");
  }else if (BMI<Normal){
    printf("Normal");
  }else if (BMI<Underweight){
    printf("Overweight");
  }else{
    printf("Obese");
  }
printf("\n");//New line for prompt at end 
return 0;
}

//function to calculate BMI
float calc(float in_weight, float in_height){
  float result = 0.0;
  result=((703*in_weight)/( pow(in_height, 2) ));
 return result;
}
