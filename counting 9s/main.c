#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int digit=0,n,n2;
	printf("enter number:");
	scanf("%d",&n);
	while(n>0){
		n2=n%10;
		if(n2==9){
			digit++;
		}
		n=n/10;
	}
	printf("the number of 9s is:%d",digit);
	
	
	
	return 0;
};

