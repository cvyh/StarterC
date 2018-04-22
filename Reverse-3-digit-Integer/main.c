#include <stdio.h>
#include "Reverse.h"
int main() {
	int num;
	scanf_s("%d", &num);
	printf("The original number is %d \n", num);
	
	int numAfterReverse = Reverse(num);
	printf("After reverse, the number is %d\n", numAfterReverse);

	return 0;
}