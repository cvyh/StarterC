#include <stdio.h>
#include "swap.h"


int main() {
	int anArray[6];
	for (int i = 0; i < 6; i++) {
		printf("%d\n", i);
		scanf_s("%d",&anArray[i]);
	}
	for (int i = 0; i < 6; i++) {
		printf("%d", anArray[i]);
	}
	printf("\n");
	swap(anArray, 1, 2);
	for (int i = 0; i < 6; i++) {
		printf("%d", anArray[i]);
	}
	return 0;
}

