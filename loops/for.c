#include <stdio.h>
#include <stdlib.h>
int main () {

	int i;
	int sum=0;
	for (i=1 ; i<30 ; i++)
	{
		sum++;
		printf ("%d",sum);
		if (sum == 15)
			exit (1);
		printf ("%d",sum);
	}
}
