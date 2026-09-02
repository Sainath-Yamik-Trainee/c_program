
#include<stdio.h>
int main(){
    int a,b,c,d,product1,product2,diff;
    printf("enter the values");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    product1=a*b;
    printf("%d*%d=%d",a,b,product1);
    product2=c*d;
    printf("%d*%d=%d",c,d,product2);
    diff=product1-product2;
    printf("%d-%d=%d",product1,product2,diff);
    return 0;
}

