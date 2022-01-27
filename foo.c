#include <stdio.h>
int main(int argc, char **argv) {
	int i;
	/* Print Hello World multiple times */
	for (i=1; i<100; i++) {
		fprintf(stdout, "Hello World!\n");
	}
	return 0;
}
