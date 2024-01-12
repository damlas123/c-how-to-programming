#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int i,j;
	int a=0,temp1=1,b=15,temp=15;
	for(i=1;i<=19;i+=2){
		for(j=1;j<=i;j++){
			while(a<9){
				printf(" ");
				a++;
			}
			printf("%c",'*');
		}
		printf("\n");
		a=temp1++;
	}
	
	a=1;
	b=1;
	for(i=1;i<=17;i+=2){
		while(a<=b){
       	printf(" ");
       	a++;
	   }
		for(j=17;j>=i;j--){
			printf("*");
		}
		a=1;
		printf("\n");
		b++;
	}
	return 0;
}
