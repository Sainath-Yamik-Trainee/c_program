#include<stdio.h>
int main(){
	int a,b;
	printf("enter before swap");
	scanf("%d %d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("after swap");
        printf("%d",a);
	printf("%d",b);
	return 0;
}
