
#include<stdio.h>
int main(){
	int n=7;
	int i=2;
	n=n&~(1<<i);
	printf("%d",n);
	return 0;
}

