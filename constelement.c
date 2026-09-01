
#include<stdio.h>
int main(){
	int arr[3]= {10,20,30};
	int*const p=arr;
	p[0]=10;
	p[1]=20;
	p[2]=40;
	printf("%d %d %d",arr[0],arr[1],arr[2]);
	return 0;
}
