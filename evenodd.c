#include<stdio.h>
void evenodd(int n);
int main(){
	int n;
	printf("enter number");
 	scanf("%d",&n);
        evenodd(n);
	return 0;
}
void evenodd(int n){
	if(n%2==0){
		printf("it is even");
	}
	else{
		printf("it is odd");
	}
	return 0;
}

