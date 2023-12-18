#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,f=1;
	printf("enter which number do you want to take factorial:");
	scanf("%d",&a);
	while(a>0){
		f=f*a;
		a--;
	}
	printf("the factarial of %d is :%d",a,f);
	return 0;
}
