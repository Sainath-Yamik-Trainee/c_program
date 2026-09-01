#include<stdio.h>
int factorial(int n);
int main(){
	int n;
	int result;
	printf("enter nu number");
	scanf("%d",&n);
        result=factorial(n);
	printf("%d=factorial",result);
	return 0;
}
int factorial(int n){
	int i;
	int result=1;
	for(i=1;i<=n;i++){
		result=result*i;
	}
	return result;
}
