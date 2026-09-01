
#include<stdio.h>
int main(){
	int n;
	printf("enter n number");
        scanf("%d",&n);
	n=n&n-1;
	printf("after removing=%d",n);
	return 0;
}

