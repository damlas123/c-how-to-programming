#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,i=1;
	printf("enter a number :");
	scanf("%d",&a);
	while(i<=a){
		b=1;
		while(b<=i){
			printf("%d",b);
			b++;	
		}
		printf("\n");
		i++;
	}
	return 0;
}
