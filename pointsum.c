
#include<stdio.h>
int main(){
	int a=30;
	int b=50;
	const int *p=&a;
	const int *p1=&b;
        int sum;
	p=&a;
	p1=&b;
        sum=*p + *p1;
	printf("%d",sum);
	return 0;
}

