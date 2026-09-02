#include<stdio.h>
float simple(float p,float t,float r);//decelaration
int main(){
	float p,t,r,si,total;
	printf("enter the ptr values");
	scanf("%f %f %f",&p,&t,&r);
        si=simple(p,t,r);
	printf("%f\n",si);
	total=si+p;
	printf("%f\n",total);
	return 0;
    } 


       float simple(float p,float t,float r){
       return (p*t*r)/100;//defination
      }

