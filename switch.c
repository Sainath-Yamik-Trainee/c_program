
#include<stdio.h>
int main(){
	int day;
	printf("enter the day");
	scanf("%d",&day);
	
	switch (day)
        {
		case 1:
			printf("monday");
			break;
		case 2:
		       printf("tuesday");
	               break;
	        case 3:
	               printf("wednseday");
		default:
               	       printf("not valid");
	              break;
	}
		      return 0;
}	
	             	       
