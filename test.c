#include "slice.h"

int main() {
	char* string = (char*)malloc(15);
	fgets(string, 15, stdin);

	char* copy = slice_or_copy(20, string);
	
	copy == string?
		printf(" | copy failed\n"):
		printf(" | copy works \n");

	free(copy);
	free(string);

	return 0;
} // end main
