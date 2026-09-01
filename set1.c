
#include<stdio.h>
int main(){
	int i=1;
	int n=5;
	n=n|(1<<i);
	printf("after setting=%d",n);
	return 0;
}
