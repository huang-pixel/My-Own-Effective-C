#include <stdio.h>
#include <stdlib.h>

void swap(int *pa, int *pb) { // pa -> a: 21 pb -> b: 17
	int t = *pa;          // t: 21
	*pa = *pb;            // pa -> a: 17 pb -> b:17
	*pb = t;              // pb -> b: 21 pa -> a: 17
}

int main() {
	int a = 21;           // a = 21
	int b = 17;           // b = 17
	swap(&a, &b);         // Pass by reference
	printf("a = %d, b = %d\n", a, b); // a = 17 b = 21
	return EXIT_SUCCESS;
}
