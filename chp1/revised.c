#include <stdio.h>
#include <stdlib.h>

int main() {
	if (puts("Hello, world!") == EOF) { // return EOF(-1) if any error occurs
		return EXIT_FAILURE;
		// code here never executes
	}
	return EXIT_SUCCESS;
	// code here never executes
}
