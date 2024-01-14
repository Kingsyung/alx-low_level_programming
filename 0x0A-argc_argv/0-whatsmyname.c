#include <stdio.h>

int main(int argc, char *argv[]) {

    // Check to see if at least one command-line argument is made available
   
       	if (argc >= 1) {
       
	       	// Printing the name of the program (with path inclusive)
       
	       	printf("%s\n", argv[0]);
   
       	} else {
        fprintf(stderr, "Error: No command-line arguments provided.\n");
   
       	}
   
       	return 0;
}

