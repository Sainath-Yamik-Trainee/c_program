
#include<stdio.h>
void maximum(int a,int b);
int main(){
	int a=10;
	int b=20;
	maximum(a,b);
	return 0;
}
void maximum(int a,int b){
	if(a>b){
		printf("a is maximum then b");
	}
	else if(b>a){
		printf("b is maximum then a");
	}
	return 0;
}
