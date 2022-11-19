#include <stdio.h>

int main () {

	int a,b,c;
	scanf ("%d",&a);
	scanf ("\n%d",&b);
	scanf ("\n%d",&c);
	int min = a;
	if (b < min)
		min = b ;
	if (c < min)
		min = c ;

	printf ("%d",min);
}
