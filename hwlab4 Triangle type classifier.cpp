#include <stdio.h>
int main(){
//task2: triangle type classifier
int side1, side2, side3;
printf("Enter three side lengths: ");
scanf("%d %d %d", &side1, &side2, &side3);

 if (side1+side2> side3 && side2+side3> side1 && side1+side3> side2){
 	printf("Valid Triangle ");
 	if (side1==side2 && side2==side3) {
 		printf("-> Type: Equilateral");}
 		else if (side1==side2 || side1==side3 || side2==side3){
 			printf("-> Type: Isoceles");
		 } else {
		 printf("-> Type: Scalene");}
	 }
 	
  else { printf("This is not a triangle");
	 }
	return 0;
}
