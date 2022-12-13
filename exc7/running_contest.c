#include <stdio.h>

unsigned long int factorial (unsigned long int n ) {
	
	if (n == 1)
		return 1;
	return n*factorial(n-1);
}

unsigned long int combination (unsigned long int n,unsigned long int r) {

	if (n-r == 0)
		return 1;
	return factorial(n)/(factorial(r)*factorial(n-r));
}


// The non_equal_part function only calculates 
// the results such as :
// 1.runner-A 
// 2.runner-B 
// 3.runner-C
// 4.runner-D 
// where none of the players had arrived at the same time.
unsigned long int non_equal_part (unsigned long int number_of_runners) {

	if (number_of_runners == 1)
		return 1;
	if (number_of_runners == 2)
		return 2;
	return combination(number_of_runners,number_of_runners-1) * non_equal_part(number_of_runners-1);
}

// The equal_part function calculates 
// every possible result that would 
// happen if at least two players
// arrive at the same time.
// e.g:
// 1. runner-A
// 1. runner-B
// 3. runner-C
// 4. runner-D

unsigned long int equal_part (unsigned long int number_of_runners) {

	if (number_of_runners == 1)
		return 0;
	// the 1 input condition is only made-up rule
	// by me
	
	if (number_of_runners == 2)
		return 1;
	unsigned long int result=0;
	for (unsigned long int i=2 ; i <= number_of_runners ;i++ ){
		result += (combination(number_of_runners,i) * non_equal_part(number_of_runners-i+1));
	}
	return result;
	
}

unsigned long int number_of_possible_results (unsigned long int number_of_runners) {
	
	return non_equal_part(number_of_runners) + equal_part(number_of_runners);
}


int main () {

	unsigned long int n;
	scanf ("%lu",&n);

	printf("%lu",number_of_possible_results(n));

	return 0 ;
}
