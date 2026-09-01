
#include<stdio.h>
int main(){
	int n=5;
	int i=2;
	int result;
	result=n^(1<<i);
	printf("%d",result);
	return 0;
}
