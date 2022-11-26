#include <stdio.h>

int main () {

	int bf,af,result ; // bf : before floating point
	scanf ("%d.%d",&bf,&af);
	if (bf == af ) {
		result = bf % 10;
	}
	else {
		result = (bf % 10) + 1 ;
	}
	printf ("%d", result);
	return 0 ;
}
