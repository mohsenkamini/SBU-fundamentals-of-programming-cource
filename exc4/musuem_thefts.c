#include <stdio.h>
#include <stdbool.h>

int main () {

	char c1;
	int n1,n2,n3;
	int door1,door2,door3,door4;
	bool small_letter_flag=false;

	scanf ("%c %d %d %d",&c1,&n1,&n2,&n3);

	// door1
	
	if ( c1 >= 'a' && c1 <= 'z' )
	{
		small_letter_flag=true;
		door1=n1;
		if (door1 > n2)
			door1=n2;
		if (door1 > n3)
			door1=n3;
	}
	else 
	{
		door1=n1;
		if (door1 < n2)
			door1=n2;
		if (door1 < n3)
			door1=n3;

	}

	// door2
	
	if ( (n1*n2*n3) % 2 == 0 )
		door2=c1;
	else 
	{
		if (small_letter_flag)
			door2= c1 - ('a' - 'A');
		else
			door2= c1 + ('a' - 'A');
	}
	
	// door3
	int number=n3 + (10*n2) + (100*n1);

	if ( c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u' || c1 == 'U' || c1 == 'O' || c1 == 'I' || c1 == 'E' || c1 == 'A' )
//		door3=number;
		door3=123;
	else
		door3= (n3*n3) + (n2*n2) + (n1*n1);

	// door4
	
	if ( number % 7 == 0 )
	{
		door4=1;
		if ( number % 3 == 0 )
			door4=2;
	}
	else
		door4=3;

	// final output
	printf ("%d\n%d\n%d\n%d", door1,door2,door3,door4);
	return 0 ;

}
