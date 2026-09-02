
#include<stdio.h>
float remainder(float a,float b);
int main(){
    float a,b,mod;
    printf("enter the values");
    scanf("%f %f",&a,&b);
    mod=remainder(a,b);
    printf("%f",mod);
    return 0;
}
float remainder(float a,float b){
	return a%b;
}
