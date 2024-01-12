#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int side1,side2,hypotenus;
	for(side1=1;side1<501;side1++){
		for(side2=1;side2<501;side2++){
			for(hypotenus=1;hypotenus<500;hypotenus++){
				if((side1*side1 + side2*side2 )== hypotenus*hypotenus){
					printf("the sides are :%d %d and the hypotenus is:%d\n",side1,side2,hypotenus);
				}
			}
		}
	}
	
	return 0;
}
