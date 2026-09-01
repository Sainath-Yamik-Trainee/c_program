
#include<stdio.h>
struct employe{
	int id;
	char name;
	float salary;
};
void accept(employe);
int main(){
	struct employe a;
	 a.id=1018;
	 a.name='yamik';
	 a.salary=20853.3;
	 printf("%d",a.id);
	 printf("%c",a.name);
	 printf("%f",a.salary);
	 return 0;
}
