#include <stdio.h>
/*
Often known as "C-style"
or "multi-line" comments.
*/

//Thist is a "single-line" comments, which also known as "C++-style" comments.

int main() {
	const int YEAR = 2018;//Const object cannot be modified

	printf("Hello World, it's %d.\nGive me a whole nmber please.\n",YEAR);//Format print, %d means int.
	
	int aNumber;
	scanf_s("%d", &aNumber);//A special function to replace the original C function scanf()
	printf("%d\n", aNumber);

	float pi1 = 3.14159265;
	double pi2 = 3.14159265;
	printf("This is a single floating-point number: %f,\nThis is a double floating-point number: %lf",
		pi1, pi2);//%f means float, %lf means double(To be honest, there is no need to use lf in printf(), %f is enough to use.)

	return 0;

}