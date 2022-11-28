#include <stdio.h>


int main () 
{

	int vertical,horizontal,toggle=1;

	scanf ("%d %d",&vertical,&horizontal);

	for (int i=1 ; i <= vertical ; i++)
	{
		for (int j=1 ; j <= horizontal ; j++)
			if (j % 2 == toggle)
				printf ("X");
			else
				printf ("O");
		printf ("\n");
		if (toggle)
			toggle=0;
		else
			toggle=1;
	
	}	


}

