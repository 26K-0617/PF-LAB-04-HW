#include <stdio.h>
int main () {
	float weight, height, bmi;
	printf("Enter weight: ");
	scanf("%f", &weight);
	printf("Enter height: ");
	scanf("%f", &height);
	
	if (weight>0 && height>0){
	bmi = weight/(height*height);
	printf("BMI: %.2lf ", bmi);

     if (bmi<18.5){ 
	  printf("-> Category: Underweight");
	  } 
	  else if (bmi>= 18.5 && bmi<=24.9){
	   printf("-> Category: Normal");
	   }
	  else if (bmi>=25 && bmi<=29.9){ 
	   printf("-> Category: Overweight");
	  }
	  else { 
	   printf("-> Category: Obese");
	  }}
	else { printf("Error! Enter a positive number for height and weight.");
	}
	

	return 0;
}
