#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void frequencyfiner (int frequency[],int array[]){

int i=0;

for(i=0;i<10;i++){
	++frequency[array[i]];
}

for(i=0;i<10;i++){
	printf("%d has frequency of :%d\n",i,frequency[i]);
}



}
int main(int argc, char *argv[]) {
	int studentnumber[10],i;
	printf("enter your student number:");
	for(i=0;i<10;i++){
		scanf("%d",&studentnumber[i]);
	}
	int fre[10]={0};
	frequencyfiner(fre,studentnumber);
	return 0;
}
