
#include<stdio.h>
int square(int n);
int cube(int n);
int main(){
	int n=5;
        int result;
	int result1;
	result= square(n);
       result1=cube(n);


	return 0;
}
int square(int n){
	int result=n*n;
	printf("%d*%d=%d\n",n,n,result);
	return result;
}
int cube(int n){
	int result1=n*n*n;
	printf("%d*%d*%d=%d\n",n,n,n,result1);
         return result1;
	}


