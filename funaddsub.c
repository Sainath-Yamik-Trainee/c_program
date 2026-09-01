
#include<stdio.h>
int add(int a, int b){
	return a+b;
}
int sub(int a,int b){
	return a-b;
}
int main(){
	int a=10;
	int b=5;
 	int (*p)(int ,int);
	p=add;
	printf("%d",p(a,b));
	p=sub;
        printf("%d",p(a,b));
	return 0;
}
