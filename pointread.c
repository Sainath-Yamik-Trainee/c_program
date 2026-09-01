
#include<stdio.h>
int main(){
	int a=10;
	int b=20;
	const int*p=&a;
	p=&a;
	printf("%d",*p);
	return 0;
}
