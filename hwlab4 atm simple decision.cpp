#include <stdio.h>
int main () {
long long bal, with;
printf("Enter balance: ");
scanf("%lld", &bal);
printf("Enter withdrawal amount: ");
scanf("%lld", &with);

if (with %500 == 0 && with<= bal && with<= 25000) {
	printf("Withdrawal successful. Remaining balance: %lld", bal-with);
}
else{
	printf("Error! Withdrawal failed.\n");
  if (with %500 != 0 ) {
	printf("Problem: Withdrawal amount must be a multiple of 500\n");
}
  if(with>25000) {
    printf("Problem: Exceeded daily limit of 25,000\n");
	}

   if(with>bal) {
    printf("Problem:Insufficient funds\n");
	} }

 return 0;	
}
