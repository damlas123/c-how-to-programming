#include <stdio.h>
#include <stdlib.h>

 
int main(int argc, char *argv[]) {
	int digit;
	printf("enter digit number:");
	scanf("%d",&digit);
	while(digit>0){
		if(digit%50==0){
			printf("\n");
			printf("$");
			printf(" ");
		}
		else{
			printf("$");
			printf(" ");
		}
		digit--;
	}
	return 0;
}
