
#include<stdio.h>
int main(){
    int num1,num2,sum,average;
    printf("enter two number");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("%d+%d=%d",num1,num2,sum);
    average=sum/2;
    printf("%d=%d",sum,average);
    return 0;
}


