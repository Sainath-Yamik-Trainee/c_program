#include<stdio.h>
int prod(int a,int b);
int main(){
    int a,b,product;
    printf("enter the numbers");
    scanf("%d %d",&a,&b);
    product=prod(a,b);
    printf("%d",product);
    return 0;
}

    int prod(int a,int b){
    return a * b;
    }


