#include <stdio.h>
int main(int argc, char **argv) {
	int counter=0; /* counter*/
	/* Print Hello World multiple times */
	for (counter=1; counter<100; counter++) {
		fprintf(stdout, "Hello World!\n");
	}
	return 0;
}
