
#include<stdio.h>
struct employe{
	int id=1;
        float salary=2500.35;
};
int main(){
       struct employe e;
       struct employe *p = &e;
       printf("%d %2f",e.id, e.salary);
      p->salary = 2660.49;
       printf("%d %2f",e.id, e.salary);
       return 0;
}       
