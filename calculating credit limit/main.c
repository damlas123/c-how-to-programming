#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int credit[3],balance[3],oldlimit[3];
	char customer[3][100];
	int i=0;
	for(i=0;i<3;i++){
		   printf("enter name :");
		   scanf("%s",&customer[i]);	
		}
    for(i=0;i<3;i++){
    	printf("enter the old limit for %s:",customer[i]);
    	scanf("%d",&oldlimit[i]);
	}
	for(i=0;i<3;i++){
		printf("the old limit of %s customer :%d\n",customer[i],oldlimit[i]);
		credit[i]=oldlimit[i]/2;
		printf("the new credit limits for %s customer is :%d\n",customer[i],credit[i]);
		printf("%s customer curent balance:\n",customer[i]);
		scanf("%d",&balance[i]);
		if(balance[i]<=credit[i]){
			printf("%s customer has not exceed their new limit:%d tl can spend \n",customer[i],-balance[i]+credit[i]);
		}
		else{
			printf("%s customer has exceed her/his new limit and owe %d money\n",customer[i],-credit[i]+balance[i]);
		}
	}
	return 0;
}
