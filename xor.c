#include<stdio.h>
int main(){
	int a;
	int b;
	printf("before swaping values are: ");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swaping");
	printf("%d\n",a);
	printf("%d\n",b);
	return 0;
}
