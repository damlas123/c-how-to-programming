#include <stdio.h>
#include <stdlib.h>
#define SIZE 15
void samefunction(char array[],char array1[])
{
	int i,flag=0;;
	for(i=0;i<SIZE;i++){
		if(array[i]!=array1[i]){
		flag =1;
		break;
		}
	}
	if(flag==1){
		printf("they are not same");
	}
	else{
		printf("same");
	}
}

int main(int argc, char *argv[]) {
	char string[SIZE],string2[SIZE];
	int i;
	printf("enter a string:");
	fgets(string,sizeof(string),stdin);
	string[strcspn(string,"\n")]='\0';
	printf("enter anothe string:");
	fgets(string2,sizeof(string2),stdin);
	string2[strcspn(string2,"\n")]='\0';
	samefunction(string,string2);
	return 0;
}
