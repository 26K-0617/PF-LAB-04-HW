#include <stdio.h>
int main (){
	int units;
	printf ("Enter units consumed: ");
	scanf("%d", &units);
	

	if (units>=0 && units<=100) {//first 100 units
		printf("Total bill: Rs. %d",5*units);}
		
		else if (units<=200) {//first 100 at prev rate+more(remain) at new rate eg 120 units so 100 at 5rs rate and remaing 120-100 at 8rs rate
		printf("Total bill: Rs. %d",500+(8*(units-100)));}
		
		else if (units<=400){
		printf("Total bill: Rs. %d",500+800+(12*(units-200)));}
		
		else{
		printf("Total bill: Rs. %d",500+800+2400+(15*(units-400)));}//first 100 units total 500rs next 100 ke+800rs 
			                              //next 200 units ke+2400 then remaining units par 15rs ka rate
	return 0;
	
}
