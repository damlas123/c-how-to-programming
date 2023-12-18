#include <iostream>


int main(int argc, char** argv) {
	int a,b,c;
	printf("enter sides of triangle:");
	scanf("%d %d %d",&a,&b,&c);
	if(a+b>c && a+c>b && c+b>a){
		printf("they can be sides of a triangle");
	}
	else{
		printf("they can't be sides of a triangle");
	}
	return 0;
}
