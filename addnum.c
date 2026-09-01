#include<stdio.h>
int addnumbers(int a,int b);
int main(){
	int a=10;
	int b=20;
	int result;
	result=addnumbers(a,b);
	printf("%d:sum",result);
	return 0;
}
int addnumbers(int a,int b){
	int result=a+b;
	return result;
}

  
