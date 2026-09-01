
#include<stdio.h>
int main(){
	int n=9;
	int i=3;
	n=n^(1<<i);
	printf("%d=after toggile",n);
	return 0;
}

