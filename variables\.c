
#include<stdio.h>
int main(){
	int x,y;
	printf("enter values");
	scanf("%d %d",&x,&y);
	printf("%d %d",x,y);
	x=x^y;
	y=y^y;
	x=x^y;
	printf("%d %d",x,y);
}
