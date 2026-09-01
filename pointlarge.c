#include<stdio.h>
int main(){
	int arr[5]={10,20,30,35,25};
	int *p;
	int largest;
	p = arr;
	largest=p[0];
	for(int i=0;i<=5;i++){
		if(p[i]>largest){
			largest=p[i];
		}
		else{
		    printf("error");
		}
                }
	printf("%d:largest",largest);
	return 0;
}

