
#include<stdio.h>
int main(){
   int a,b,sum,diff,prod,div;
   char oper;
   
   printf("enter the a value");
   scanf("%d",&a);
   
   printf("enter the b value");
   scanf("%d",&b);
   
   printf("enter the oper");
   scanf(" %c",&oper);
   
   switch (oper){
	   case '+':
	   sum=a+b;
	   printf("%d",sum);
	   break;
	   case '-':
	   diff=a-b;
	   printf("%d",diff);
	   break;
	   case '*':
	   prod=a*b;
	   printf("%d",prod);
	   break;
	   case '/':
	   if (b==0){
	      printf("error");
	   }
	   else{
	      div=a/b;
	      printf("%d",div);
	      break;
	   }

           defaut :
	   printf("invalid");
   }
   return 0;
}   
