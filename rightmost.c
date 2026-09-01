
#include<stdio.h>
int main(){
	int n,position =1;
	printf("enter n number");
	scanf("%d",&n);
	if(n==0){
		printf("it is set");
                return 0;
	}
	while((n&1)==0){
	     n = n>>1;
	     position++;
	  }
	printf("right most bit=%d",position);
	return 0;
}
		
