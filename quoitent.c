#include<stdio.h>
float quoitent(float a,float b);
int main(){
    float a,b,result;
    printf("enter the values");
    scanf("%f %f",&a,&b);
    result=quoitent(a,b);
    printf("%f",result);
    return 0;
}   

    float quoitent(float a,float b){
    if (b==0){
      printf("error");
    return 0;
    }
    return a/b;
}
