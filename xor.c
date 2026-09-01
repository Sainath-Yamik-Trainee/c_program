
#include<stdio.h>
int main(){
	int a;
	int b;
	printf("before swaping");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swaping");
	printf("%d",a);
	printf("%d",b);
	return 0;
}
