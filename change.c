
#include<stdio.h>
void change(int*p){
	*p=10;
}
int main(){
	int a=20;
	change(&a);
	printf("%d=changed value",a);
	return 0;
}
