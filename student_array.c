
#include<stdio.h>
struct student{
	int id;
	int marks;
}
int main(){
	struct student s[5]={{1,10},{2,20},{3,30},{4,40},{5,50}};
	for(int i=0;i<5;i++){
		printf("%d %d",s[i],s[i]);
				}
				return 0;}
