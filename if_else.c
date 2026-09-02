#include<stdio.h>
int main(){
    float num1,num2,quoitent;
    printf("enter the numbers");
    scanf("%f %f",&num1,&num2);
    quoitent=num1/num2;
    if(quoitent >=0)
      printf("%f\n",quoitent);
    else
     printf("dont display");
    return 0;
}    
