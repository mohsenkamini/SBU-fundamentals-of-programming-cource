#include <stdio.h>;

int x ;			// global vars occupie the memory 
			// as long as runtime

int main () {

	printf("%d",x); // prints 0
			// the default value for global variables 
			// is 0 
	return 0;
}
