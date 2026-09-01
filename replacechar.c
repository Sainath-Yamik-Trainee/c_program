
#include<stdio.h>
int main(){
    char str[100];
    char find,replace;
    int i;
    printf("enter the string");
    fgets(str,sizeof(str),stdin);
    printf("find");
    scanf("%c",&find);
    printf("replace");
    scanf("%c",&replace);
    for(i=0;str[i]!=0;i++)
    if(str == find){
	    str[i]=replace;
    }
    printf("%s",str);
    return 0;
}

