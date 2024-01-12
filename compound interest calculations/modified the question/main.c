#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float  d=1,a,n,p,r;
	int i,j;
	p=1000.00;
    r=0.05;
	for(i=1;i<=6;i++){
		for(j=1;j<=10;j++){
			d*=(1+0.05);
		}
	a=(float)d*p;
	printf("the compound interest program with %.2f rate is:%f\n",r,a);
	r+=0.01;
	}
	return 0;
}
