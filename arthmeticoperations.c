
#include<stdio.h>
#include<math.h>
int main(){
    float num1,num2,sum,diff,prod,div,mod;
    printf("enter the values");
    scanf("%f %f",&num1,&num2);
    sum=num1+num2;
    diff=num1-num2;
    prod=num1*num2;
    div=num1/num2;
    mod=fmod(num1,num2);
    printf("%f+%f=%f\n",num1,num2,sum);
    printf("%f-%f=%f\n",num1,num2,diff);
    printf("%f*%f=%f\n",num1,num2,prod);
    printf("%f/%f=%f\n",num1,num2,div);
    printf("%f %% %f=%f\n",num1,num2,mod);
    return 0;
}
    
