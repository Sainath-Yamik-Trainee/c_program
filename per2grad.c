
#include<stdio.h>
int main(){
    int grade;
    printf("enter the percentage");
    scanf("%d",&grade);

    if (grade>100||grade<0){
	printf("error");
    }
    
    
     switch(grade == 100? 10 : grade/10){    


	   case 10:
	   case 9:
	   case 8:
	     printf("grade=honous");
	     break;
	   case 7:
           case 6:
	     printf("grade=first");
	     break;
	   case 5:
	     printf("grade=second");
	     break;
	   case 4:
	     printf("grade=third");
	     break;
	   default:
	     printf("fail");
             break;
    }
   return 0;
}   


