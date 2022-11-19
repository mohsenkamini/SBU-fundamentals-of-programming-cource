#include <stdio.h>
int main () {
	
	char x;
	scanf ("%c", &x);
	if ( x >= 'A' && x <= 'Z' )
		printf ("Capital Letter");
	else
	  if ( x >= 'a' && x <= 'z' )
			printf ("Small Letter");
	  else
	    if ( x >= '0' && x <= '9' )
	  		printf ("Digit");
	    else
		    	printf ("Other");
	return 0 ;
}
