#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int number,i=1;
	float price,total,sum=0;
	while(i<8){
		printf("enter product number:");
		scanf("%d",&number);
		printf("enter the quantity for this product:");
		scanf("%f",&price);
		switch(number){
			case 1:{
				total= price*2.98;
			
				break;
			}
			case 2:
				{
					total=price*4.50;
				break;
				}
			case 3:{
				total=price*9.98;
			
				break;
			}
			case 4:{
				
				total=price*4.49;
			
				break;
			}
			case 5:{
				
				total=price*6.87;
				break;
			}
		 sum+=total;
		}
		 i++;
	}
	printf("the total money:%f",sum);
	return 0;
}
