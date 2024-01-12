#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	float sum=0;
	int i;
	for(i=1;i<100000;i+=2){
		if(i%4==1){
			sum+=(4/(float)i);
		}
		else if(i%4==3){
			sum-=(4/(float)i);
		}
	}
	printf("%f",sum);
	return 0;
}
