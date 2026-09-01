#include<stdio.h>
int main(){
	int n=18;
	int i=1;
	int result;
	result=n&~(1<<i);
	printf("%d:clear",result);
	return 0;
}

