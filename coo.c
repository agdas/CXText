#include <stdio.h>
int main(int argc, char **argv) {
	int i=0; /* counter*/
	/* Print Hello Universe multiple times */
	for (i=1; i<20; i++) {
		fprintf(stdout, "Yo, Hello Universe!\n");
	}
	return 0;
}
