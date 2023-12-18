#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int binary,sum=0,digit=0,n;
	printf("enter a number:");
	scanf("%d",&binary);
	while(binary>0){
		n=binary%10;
		sum=pow(2,digit)*n+sum;
		binary=binary/10;
		digit++;
	}
	printf("the decimal:%d",sum);
	return 0;
}
