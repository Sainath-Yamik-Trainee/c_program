#include<stdio.h>
struct student{
	int id;
	int marks;

};
int main(){
	struct student s[5]={{1,25},{2,85},{3,60},{4,55}};
       int largest = s[0].marks;
	for(int i=0;i<5;i++){
		if(s[i].marks > largest){
			largest=s[i].marks;
                      }
		}
	s[0].marks=largest;
	printf("%d",s[0].marks);
       return 0;
      }

