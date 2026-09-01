
#include<stdio.h>
void prime(int n);
int main(){
	int n;
	printf("enter number");
	scanf("%d",&n);
	prime(n);
	return 0;
}
void prime(int n){
	int count=0;
	int i;
	for(i=1;i<=n;i++){
		if(n%i == 0){
			count++;
		}
	}
	if(count==2){
		printf("it is prime");
	}
	else{
		printf("it is not prime");
	}
	return 0;
}
