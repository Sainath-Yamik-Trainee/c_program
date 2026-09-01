
#include<stdio.h>
int add(int a,int b){
	return a+b;
}
int main(){
	int(*p)(int,int);
	p=add;
	printf("%d=add",p(10,20));
	return 0;
}
