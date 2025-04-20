#include <stdio.h>
#include <stdlib.h>
// swap function: swapping two integers values
void swap(int a, int b) { 
	int t = a; // t is a temporary variable 
	a = b;
	b = t;
	printf("swap: a = %d, b = %d\n", a, b);
}
//main fucntion
int main() {
	int a = 21;
	int b = 17;
	swap(a, b); // swap called, a = 17, b = 21
	printf("main: a = %d, b = %d\n", a, b); // inside main, a = 21, b = 17
	return EXIT_SUCCESS;
}
