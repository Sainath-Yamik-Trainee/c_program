#include<stdio.h>
int main(){
    char ch;
    printf("enter a character");
    scanf("%c",&ch);
    if ((ch>='A' && ch<='Z')||(ch>='a' && ch<='z'));
    {
      printf("it is a alphabet");
    }
     
    else if (ch>='0' && ch<='9')
    {
       printf("it is not an alphabet");
    }
    else
    {  
      prinf("it is a special charachter");
    }
    return 0;
}
