
#include<stdio.h>
int main(){
	int a=10;
	int b=20;
	int c=15;
	int*p;
	int*q;
	int*r;
	p=&a;
	q=&b;
	r=&c;
        if(*p>*q && *p>*r){
		printf("%d: a is greater than b,c",a);
	}
	else if(*q>*p && *q>*r){
		printf("%d: b is greater than a,c",b);
	}
	else if(*r>*p && *r>*q){
		printf("%d: c is greater than a,b",c);
	}
	return 0;
}
