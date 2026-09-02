
#include<stdio.h>
int main(){
	int num,i;
	printf("enter number is hexadecimal");
	scanf("%x",num);
	printf("befor swaping num=%x\n",num);
	bit_pattern(num);
	num=(num<<8)|((num>>8)&0x00FF);
	printf("after swaping=%x\n",num);
	bit_pattern(num);
}


	
