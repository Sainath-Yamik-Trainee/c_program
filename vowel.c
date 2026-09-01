
#include<stdio.h>
int main(){
    char c;
   printf("enter the alphabet");
   scanf("%c",&c);
   switch(c){

	   case 'a':
	   case 'e':
	   case 'i':
	   case 'o':
	   case 'u':
	   case 'A':
	   case 'E':
	   case 'I':
	   case 'O':
	   case 'U':
	printf("entered alphabelt is a vowel");
	break;

	   default:
	printf("it is not an vowel");
   }
	return 0;
}	



