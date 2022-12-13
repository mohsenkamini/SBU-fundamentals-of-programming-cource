#include <stdio.h>

unsigned long long int collatz (unsigned long long int n) {

	if (n % 2 == 0)
	{
//		printf("%llu\n",n/2);
		return n/2;
	}
	else
	{
//		printf("%llu\n",n+1);
		return n+1;
	}
}

int destruction_time (unsigned long long int n) {

	if (n == 1 )
		return 0;
	if (collatz(n) == 1)
		return 1;

	return 1 + destruction_time(collatz(n));
}

int main () {

	unsigned long long int n ;
	scanf("%llu",&n);
//	printf ("%llu\n",n);
	printf ("%d",destruction_time(n));
//	printf ("%d",collatz(n));
	return 0 ;
}



