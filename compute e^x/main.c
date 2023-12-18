#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	double sum=0,a,f=1,x,b;
	printf("enter x value:");
	scanf("%d",&x);
	while(1){
		printf("enter a number:");
		scanf("%lf",&a);
		b=a;
		while(a>0){
			f=f*a;
			if(a==1){
				sum=(pow(x,b)/f)+sum;
				f=1;
			}
			a--;
		}
		if(a==-1)
		break;
	}
	sum=sum+1;
	printf("the value:%.2lf",sum);
	return 0;
}
