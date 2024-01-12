#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,j;
	int flag=0;
	for(i=2;i<=100;i++){
		for(j=2;j<=i/2;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d is the prime number\n",i);
		}
		else{
			printf("%d is not a prime number\n",i);
		}
	}
	return 0;
}
