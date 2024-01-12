#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,j,a=1,temp=10;
	for(i=1;i<=10;i++){
		for(j=1;j<=i;j++){
			printf("%c",'*');
		}
		printf("\n");
    }
 printf("\n");
	
	for(i=1;i<=10;i++){
		for(j=10;j>=i;j--){
			printf("%c",'*');
		}
		printf("\n");
	}
	printf("\n");
	for(i=1;i<=10;i++){
		for(j=10;j>=i;j--){
			printf("%c",'*');
		}
		printf("\n");
		
	  while(a<=i){
	  	printf(" ");
	  	a++;
	  }
	  a=1;	
	}
	printf("\n");
	a=1;
	for(i=1;i<=10;i++){
	  while(a<temp){
	  	printf(" ");
	  	a++;
	  }
	  a=1;
	  temp--;
	  for(j=1;j<=i;j++){
	  	printf("%c",'*');
	  }
	  printf("\n");
	}
	return 0;
}
