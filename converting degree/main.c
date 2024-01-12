#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i;
	float degree;
	for(i=30;i<=50;i++){
		degree=(9*(float)i)/5+32;
		printf("%d celcius degree to convert to fahreniet degree is:%.2f\n",i,degree);
	}
	return 0;
}
