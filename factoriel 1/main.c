#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,fac=1,n;
	printf("enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac*=i;
	}
	printf("the factoriel of %d is:%d",n,fac);
	return 0;
}
