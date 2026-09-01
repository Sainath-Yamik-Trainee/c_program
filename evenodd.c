
#include<stdio.h>
int main(){
	int n;
	printf("enter n numbers");
	scanf("%d",&n);
	if(n & 1){
		printf("it is odd");
	}
	else{
	    printf("it is even");
	}
	return 0;
}

