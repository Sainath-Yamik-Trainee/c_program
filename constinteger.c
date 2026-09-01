
#include<stdio.h>
int main(){
	int a=5;
	int b=10;
	int*const p=&a;
	*p=15;
	printf("%d",a);
	return 0;
}

