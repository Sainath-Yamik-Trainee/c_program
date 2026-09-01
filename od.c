
#include<stdio.h>
int main(){
    int i,n,sum=0;
    int array[n];
    printf("enter the no of elements");
    scanf("%d",&n);
    printf("enter the elements");

    for(i=0;i<=n;i++){
    scanf("%d",&array[n]);
    }
    for(i=0;i<=n;i++){
      if(array[n]%2!=0){
	sum=sum+array[n];
      }
    }
    printf("%ls",&sum);
    return 0;
 }


