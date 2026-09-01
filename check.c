
#include<stdio.h>
int main(){
	int i,n,reg;
	printf("enter n number");
	scanf("%d",&n);
	printf("enter i position");
	scanf("%d",&i);
	reg=(1<<i)&n;
	printf("reg position=%d",reg);
	return 0;
}


