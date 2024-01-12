#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float  p,a,r,n,i,d=1;
	p=1000.00;
	r=0.05;
	n=10;
	for(;i<10;i++){
		d*=(1+r);
	}
	a=p*d;
	printf("after 10 years the total momey is:%lf",a);
	
	return 0;
}
