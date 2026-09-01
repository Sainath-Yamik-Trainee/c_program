
#include<stdio.h>
int multiplication(int a);
int main(){
	int a;
	int result;
	printf("enter a value");
	scanf("%d",&a);
	result=multiplication(a);
        printf("%d\n=multplication table",result);
    return 0;
}
    int multiplication(int a){
    int i;
    int result=1;    
    for(i=1;i<=10;i++){
	   result= a*i;
	   printf("%d*%d=%d\n",a,i,result);
	   
    }
    return result;
}

