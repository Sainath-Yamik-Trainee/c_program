
#include<stdio.h>
int main(){
    int month,year;
    printf("enter the month(1-12)");
    scanf("%d",&month);
    printf("enter the year");
    scanf("%d",&year);
    if (month==1||month==3||month==5||month==7||month==8||month==10||month==12);
      printf("number of days are 31");
      {
    else if (month==4||month==6||month==9||month==11)
      printf("number of days are 30");
     }
    else if (month==2){
	    if ((year %4==0&& %100!=0)||(year %400==0));{
	    printf("it is a leap year it has 29 days");
	    }
	    else {

            printf("it is a non leap year having 28 days");
    }
   else { 
      printf("enter the days are invalid");
   } 
   return 0;
}

	   

