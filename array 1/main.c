#include <stdio.h>
#include <stdlib.h>
 void maxvalue(int array[][4]){
 	int max;
 	max=array[0][0];
 	int i,j;
 	for(i=0;i<3;i++){
 		for(j=0;j<4;j++){ 
 		if(max<array[i][j] && max!=array[i][j]){
 			max=array[i][j];
		 }
		 }
	 }
	 printf("the max grade all of it is:%d\n",max);
 }
 void minvalue(int array[][4]){
 	int i,j,min;
 	min=array[0][0];
 	for(i=0;i<3;i++){
 		for(j=0;j<4;j++){
 			if(min>array[i][j]){
 				min=array[i][j];
			 }
		 }
	 }
	 printf("the min grade is:%d\n",min);
 }
 void avarage(int array[][4]){
 	double sum=0;
 	int i,j;
 	for(i=0;i<3;i++){
 		for(j=0;j<4;j++){
 			sum +=array[i][j];
		 }
		 printf("%d . student avarage is:%.2 lf",i+1,sum/4);
		 sum=0;
	 }
 }
int main(int argc, char *argv[]) {
	int studentgrade[3][4];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("enter the grade %d. student for the %d exam:\n",i+1,j+1);
			scanf("%d",&studentgrade[i][j]);
		}
	}
maxvalue(studentgrade);
minvalue(studentgrade);
avarage(studentgrade);
	return 0;
}
