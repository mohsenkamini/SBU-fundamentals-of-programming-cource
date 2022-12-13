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
						// it has to be exactly known to the compiler
						// cannot get it from a variable that does not 
						// have an exact known value. the array length 
						// can't be derived in runtime. it has to be defined
						// on compile time.
	int array_1[4]={1,2,3,4};		// array initilization
	
	// array traverse (peymayesh)
	// use array_1[i] in a for loop for instance.
	
	// arrays can't be assigned to another array:
	// int a[4]={1,2,3,4};
	// int b[4];
	// b=a // returns a compile error
}
