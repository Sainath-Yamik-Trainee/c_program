
#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter the numbers");
    scanf("%d %d",&num1,&num2);

    switch (num1>num2){

     case 0:
	   printf("num1 is larger");
	   break;
     default:
	   printf("num1 is not greater ");
	   break;
}
return 0;
}



