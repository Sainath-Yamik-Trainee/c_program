
#include<stdio.h>
int main(){
    int i,n,array[i];
    printf("enter the n number");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
    scanf("%d",&array[n]);
    }
    
    for(i=0;i<=n;i++){
	if(array[i]%2==0){
	printf("%d",array[i]);
	}
    }
    
    for(i=0;i<=n;i++){
        if(array[i]%2!=0) 
	{
           printf("%d",array[i]);
        }
    }
   
    for(i=0;i<=n;i++){
 	   printf("%d",array[i]+5);
         }
   return 0;
}
	   

   



    

