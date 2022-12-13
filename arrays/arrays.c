#include <stdio.h>

#define PI 3.141592		// preprocessing statement
				// define something to a value
				// before compiling the code it will put 3.141592 
				// in place of every PI we have used in the code.
				// 
				// PI is NOT a variable.

int main () {

	double grades[8]; 	// elements will be indexed(subscripted) from 0 to 7
	
	const int number_of_students=38;		
	double stu_ids[number_of_students];	// this has to be a constant or
						// a number. NOT a variable
						// it could also be driven from
						// #define lines.
}
