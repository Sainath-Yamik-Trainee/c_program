#include<stdio.h>
union data{
	int id;
        char name;
	float c;
};
int main(){
union data d;
        d.id=1;
	printf("%d",d.id);
	d.name='sai';
	printf("%c",d.name);
	d.c=22556.4;
	printf("%f",d.c);
	return 0;
}
