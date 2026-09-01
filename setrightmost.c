
#include<stdio.h>
int main(){
	int n;
	int result;
	printf("enter the number");
	scanf("%d",&n);
	result=n|(n-1);
	printf("%d:set bit",result);
	return 0;
}
	
