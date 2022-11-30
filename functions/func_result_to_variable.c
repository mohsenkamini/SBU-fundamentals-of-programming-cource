#include <stdio.h>

int read_positive_int () {

	int read;
	do {
		printf ("Enter a positive integer: ");
		scanf ("%d",&read);
	} while (read<=0);
	return read;
}

int main (){

	int positive_number = read_positive_int ();
	printf ("%d",2*positive_number);
	return 0;
}
