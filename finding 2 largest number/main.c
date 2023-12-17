#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a,b,i=0,c;
	
		printf("enter a number:");
		scanf("%d",&c);
		a=c;
		b=c;
	while(i<10){
		if(c>a){
			b=a;
			a=c; 
		}
		else if(c!=a && c>b){
			b=c;
		}
		printf("enter a number:");
		scanf("%d",&c);
		i++;
	}
	printf("the biggest number:%d the second biggest number:%d",a,b);
	return 0;
}
