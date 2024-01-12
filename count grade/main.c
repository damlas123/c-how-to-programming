#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int gradecounter[5]={0};
	char grade;
	do{
		printf("enter a grade for stop Z:");
		scanf("%c",&grade);
		if (grade== 'Z')
		break;
		switch(grade){
			case 'A':gradecounter[0]++;
			break;
			case 'B': gradecounter[1]++;
			break;
			case 'C': gradecounter[2]++;
			break;
			case 'D': gradecounter[3]++;
			break;
			case 'F': gradecounter[4]++;
		}	
	}while(grade);
	printf("the number of grade A is:%d\n",gradecounter[0]);
		printf("the number of grade B is:%d\n",gradecounter[1]);
			printf("the number of grade  C is:%d\n",gradecounter[2]);
				printf("the number of grade  D is:%d\n",gradecounter[3]);
					printf("the number of grade F is:%d\n",gradecounter[4]);
					
	return 0;
}
