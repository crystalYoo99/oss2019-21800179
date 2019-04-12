#include <stdio.h>

void sub1() {
	printf("---------------sub1()----------------\n");
	for(int i = 1; i <= 10; i++){
		for(int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}
	printf("---------------sub1()----------------\n");
}
void sub2();
void sub3();
void sub4();
	


int main(void) {
	sub1();
//	sub2();
//	sub3();
//	sub4();
	
	return 0;
}
