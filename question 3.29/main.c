#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int c,c2;
	c2=1;
	while(c2<=10){
		c=1;
		while(c<=c2){
			printf("*");
			c++;
		}
		printf("\n");
		c2++;
		
	}
	return 0;
}
