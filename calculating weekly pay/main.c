#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a,t,gross,gross1,piece,value;
	double payment;
	
	int i=1;
	while(i){
	printf("enter code of  employe's pay: 1 for managers\n2 for hourly workers\n3 for comission\n4 for pieceworkers:");
	scanf("%d",&a);
	if(a==2){
		printf("enter the time of workers above the 40 hours:");
		scanf("%d",&t);
		printf("enter the payment:");
		scanf("lf",&payment);
		payment+=(t*65);
	}
	if(a==3){
		printf("enter the gross:");
		scanf("%d",&gross);
		printf("enter the weekly sales:");
		scanf("%d",&gross1);
		printf("enter payment:");
		scanf("%lf",&payment);
	}
	if(a==4){
		printf("enter the piece done:");
		scanf("%d",&piece);
		printf("enter the value of each piece:");
		scanf("%d",&value);
		payment=value*piece;
		
	}

		switch(a){
		case 1:{
			printf("the salary of managers is:5000\n");
			break;
		}
		case 2:{
			printf("the total salary is:%lf\n",payment);
			break;
		}
		case 3:{
		   if(gross1>=(gross1*0.057)){
		   	payment+=(double)250;
		   	printf("the total payment:%lf\n",payment);
		   }
		   else{
		   	printf("the total payment is:%lf\n",payment);
		   }
			break;
		}
		case 4:{
			printf("the total amount of payment:%lf\n",payment);
			break;
		}
		
	}
	printf("if there is an employer enter 1\nif there is no workers enter 0:");
	scanf("%d",&i);
}
	return 0;
}
