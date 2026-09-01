
#include<stdio.h>
int main(){
	int arr[2]={10,20};
	int arr1[3]={40,50,80};
	int*const p=&arr[0];
	int*const p1=&arr1[0];
	int sum;
	p[0]=10;
	p[1]=20;
	p1[0]=40;
	p1[1]=50;
	p1[2]=80;
	sum=p[0]+p[1]+p1[0]+p1[1]+p1[2];

	printf("%d",sum);
	return 0;
}
