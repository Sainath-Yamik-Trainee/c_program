
#include<stdio.h>
void my_str_rev(char str[]){
     int  start=0,end=0;
     while(str[end]!='\0'){
     end++;
     }
     end--;
   

   while(start<end){
   char t =str[start];
   str[start]=str[end];
   str[end]=t;
   start++;
   end--;
    }
}
int main(){
    char str[] = "hello";
    my_str_rev(str);
    printf("%s",str);
    return 0;
}



