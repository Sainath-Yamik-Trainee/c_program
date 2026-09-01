
#include<stdio.h>
void swap(int *a,int *b){
	int temp;
	return temp = *a;
	      *a = *b;
	       *b = temp;
}
int main(){
	int a=10;
	int b=20;
	printf("%d %d",a,b);
	swap(&a,&b);
	printf("%d %d:swap",a,b);
	return 0;
}
