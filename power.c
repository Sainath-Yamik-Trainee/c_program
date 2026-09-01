
#include<stdio.h>
int root(int base,int exponent);
int main(){
	int base;
	int exponent;
	int result;
	printf("enter the base");
	scanf("%d",&base);
        printf("enter exponent");
	scanf("%d",&exponent);
        result=root(base,exponent);
	printf("%d=value",result);
	return 0;
}
int root(int base,int exponent){
	int result=1;
	for(int i=1;i<=exponent;i++){
            result=result*base;
	}
	 return result;
}
