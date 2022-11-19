#include <stdio.h>

int main () {
	
	int x,y;
	scanf ("%d",&x ); 
	
	switch (x){ 		// switch cannot get a float as argument since 
				// it can't store it for the exact amount

		case 1: 
			y++; 
			printf ("1");
			break;
		case 2: 
			x++;
			printf ("2");
		       	break;
		case 3:
		       	x--;
			printf ("3");
		       	break;
		default: 
			printf ("non");
	}
}
