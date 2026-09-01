
#include<stdio.h>
int main(){
	int n;
	int result;

	printf("enter number");
	scanf("%d",&n);
        result=n&(n+1);
	printf("%d:cleared last bit",result);
	return 0;
}
