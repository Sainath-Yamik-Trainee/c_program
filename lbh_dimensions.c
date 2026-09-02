
#include<stdio.h>
int main(){
    int length,width,height,box;
    printf("enter the values");
    scanf("%d %d %d",&length,&width,&height);
    box=length*width*height;
    printf("%d*%d*%d=%d",length,width,height,box);
    return 0;
}
