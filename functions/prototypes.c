#include <stdio.h>

    // function signature//
    // ||
    // V	   //
int power (int,int);		// prototype
				// only declare that there's power funtion
				//
				// in libraries we only declare functions with
				// prototypes in .h files
				// and define the function in a .c file that will
				// get linked after compile. this is by default 
				// done for popular libraries.
				// if we're defining a library ourselves, we have to 
				// specify the .c file within gcc
int main () {

	printf ("%d",power(1,2));

}

int power (int base, int pow){	// defining the function later after main

	int result =1 ;
	// ...
	// .
	// ...
	// ...
} 
