
#include<stdio.h>
    int findproduct(int array[],int n){
            int i;
            int product=1;
        for(i=1;i<n;i++){
          product = product * array[i];
          }
   return product;
}  
int main(){
    int i,n;
    int array[100];
    printf("enter the number of elements");
    scanf("%d",&n);

    printf("enter the elements");
    for(i=1;i<=n;i++){
    scanf("%d",&array[i]);
    }

    int result=findproduct(array,n);
    printf("%d",result);
    return 0;
   }



