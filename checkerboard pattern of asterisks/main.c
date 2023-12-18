#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,r,s,d=1;
	printf("enter row number:");
	scanf("%d",&a);
	for(r=1;r<=a;r++){
		if(d%2==0){
				printf(" ");
			}
		for(s=1;s<=a;s++){
			printf("*");
			printf(" ");
			
		}
		printf("\n");
		d++;
	}
	return 0;
}
