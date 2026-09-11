#include <stdio.h>
#include <ctype.h>
int main (){
	char ch;
	printf("Enter a character: ");
	scanf(" %c",&ch);

if(isalpha(ch))	{

	switch (ch){
	 case 'a':case'e':case'i':case'o':case'u': 
	 case 'A':case'E':case'I':case'O':case'U':
     printf("%c is a vowel.",ch);
	 break;	
	 
	 default: printf("%c is a consonant.",ch);
	  }
  } else {printf("Error! Please enter a letter only.");
  }
 return 0;}
