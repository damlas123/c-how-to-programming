#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[]) {
	// question 1
	/*int sum=0,i=1;
	for(i=1;i<=99;i+=2){
		sum+=i;
	}
	printf("the sum of odd number is:%d",sum);
	*/
	//question 2
/*	printf("\t%f\t",333.546372);
	printf("%.2f\t",333.546372);
	printf("%.3f\t",33.546372);
	printf("%.4f\t",333.546372);
	*/
	//question 4
	int x,i,j;
	printf("%s"," enter a integer betweeen 1-20:");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		for(j=1;j<=x;j++){
			if(i==j){
				printf("%c",'@');
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
