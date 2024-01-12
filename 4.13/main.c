#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int sum1=0,sum2=0,i,n;
	printf("enter the last number:");
scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum1+=i*i;
		sum2+=i*i*i;
	}
	printf("the sum of square of the between 1-%d:%d\n",n,sum1);
	printf("the sum of cube of the between 1-%d:%d",n,sum2);
	return 0;
}
