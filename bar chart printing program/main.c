#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,number[5],j;
	for(i=0;i<5;i++){
		printf("enter number:");
		scanf("%d",&number[i]);
	}
	for(i=0;i<5;i++){
		for(j=0;j<number[i];j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
