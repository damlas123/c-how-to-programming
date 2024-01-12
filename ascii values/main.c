#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	for(i=0;i<=127;i++){
		if(i%10==0){
			printf("%c",i);
			printf("\n");
		}
		else{
			printf("%c",i);
		}
	}
	return 0;
}
