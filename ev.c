
#include<stdio.h>
int main(){
    int i,n;
    int array[n];
    int sum;
    printf("enter thge no of elements");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
    printf("enter the elemnets");
    scanf("%d",array[n]);
    }
    for(i=0;i<=n;i++){
	if(array[n]%2==0){
       sum  =	sum+array[n];
    printf("%d",&sum);
	}
    }
   return 0;
} 
