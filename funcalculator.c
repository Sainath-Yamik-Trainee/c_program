
#include<stdio.h>
int add(int a,int b){
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);
int mod(int a,int b);
	return add=a+b;
	return sub=a-b;
	return mul=a*b;
	return div=a/b;
	return mod=a%b;
}
int main(){
	int a=10;
	int b=5;
	int (*p)(int,int);
               printf("%d:add  ",p(a,b));
               printf("%d:sub"p(a,b));
               printf("%d:mul",p(a,b));
               printf("%d:div" ,p(a,b));
               printf("%d:mod",p(a,b));
return 0;
}
