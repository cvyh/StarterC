#include <stdio.h>
#include "Convert.h"
int main() {
	char lowercaseChar;
	printf("Input a lowercase Character: ");
	scanf_s("%c", &lowercaseChar);

	printf("Convert successfully: %c", lowercaseToUppercase(lowercaseChar));

	return 0;
}