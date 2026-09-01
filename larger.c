
#include<stdio.h>
int main(){
	int a=10;
	int n=200;
	int*p;
	int*q;
	p=&a;
	q=&n;
	if(*p>*q){
		printf("%d:a is greater than n",a);
	}
	else{
		printf("%d:n is greater than a",n);
	}
	return 0;
}

