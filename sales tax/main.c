#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int s,t=0,a,n;
	char m[50];
	// m:month s:sales t:total a:number of retailer
	 printf("enter month name:");
	 scanf("%s",&m);
	  
	  a=1;
	  while(a!=-1){
	  	printf("enter 1 for state or another number for counties:");
	  	scanf("%d",&n);
	  	
	  	printf("enter sales:");
	  	scanf("%d",&s);
	  	
	  	 if(n==1){
	  	 	 t=s+s*0.4+t;
	  	 	  
		   }
		   
		   else{
		   	t=s+s*.05+t;
		   }
		   
		   printf("enter positive number for retailer number if finish enter -1:");
		   scanf("%d",&a);
	  }
	printf("the total tax in %s month is:%d",m,t);
	
	
	
	
		return 0;
}
