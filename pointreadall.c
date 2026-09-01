#include<stdio.h>
int main(){
	int a=15;
	int b=18;
	const int*p=&a;
	const int*p1=&a;
	p=&a;
	p1=&b;
	printf("%d %d",*p,*p1);
	return 0;
}
