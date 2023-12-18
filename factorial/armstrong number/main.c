#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(int argc, char *argv[]) {
	int temp,number,digit=0,sum=0,n;
	printf("enter a number:");
	scanf("%d",&number);
	temp=number;
	while(number>0){
		digit++;
		number=number/10;
	}
    number=temp;
    while(number>0){
    	sum=sum+pow(number%10,digit);
    	number=number/10;
	}
   if(sum==temp){
   	printf("this is an armstrong number");
   }
   else{
   	printf("this is not an armstrong number");
   }

	return 0;
}
