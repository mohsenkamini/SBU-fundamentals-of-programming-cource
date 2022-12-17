#include <stdio.h>

unsigned long int factorial (unsigned long int n ) {
	
	if (n == 1 || n ==0)
		return 1;
	return n*factorial(n-1);
}

unsigned long int combination (unsigned long int n,unsigned long int r) {

	return factorial(n)/(factorial(r)*factorial(n-r));
}

unsigned long int number_of_possible_results(unsigned long int n)
{
	unsigned long int result=0;
	if (n == 1 , n == 0)
	{
		return combination(1,1);
	}
	for (int i =1 ; i <= n ; i++)
	{
		result += combination(n,i)*number_of_possible_results(n-i);
	}
	return result;
}


int main () {

	unsigned long int n;
	scanf ("%lu",&n);
//	printf ("%lu\n",equal_part(n-1));

	printf("%lu",number_of_possible_results(n));

	return 0 ;
}
