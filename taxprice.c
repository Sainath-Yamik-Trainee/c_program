
#include<stdio.h>
int main(){
    int price,tax,finalprice;
    printf("enter the amount");
    scanf("%d %d",&price,&tax);
    finalprice=price+tax;
    printf("%d+%d=%d",price,tax,finalprice);
    return 0;
}    

