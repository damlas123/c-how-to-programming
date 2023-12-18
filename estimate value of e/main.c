#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	double b,f=1;
	double sum=0;
	while(1){
		printf("enter a number:");
		scanf("%lf",&b);
		while(b>0){
			f=f*b;
			b--;
			if(b==1){
				sum=sum+(1/f);
				f=1;
			}		
		}
		if(b==-1)
		break;
	}
	printf("the e is:%lf",1+sum);
	return 0;
}
