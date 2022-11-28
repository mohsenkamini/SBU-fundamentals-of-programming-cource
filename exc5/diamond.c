#include <stdio.h>


int main () {

	int n,space_needed;
	scanf ("%d",&n);


	for (int i =1 ; i <= (2*n)+1 ; i++)
	{
		printf ("-");
	}
	printf ("\n");

	for (int i =1 ; i <= n ; i++)
	{
		space_needed=((2*n+1)-2-(2*i-1))/2;
		for (int j=1 ; j <= (2*n)+1 ; j++)
		{
			if (j == 1 )
			{
				printf ("|");
			}else
			{
				if (j == (2*n)+1 )
				{
					printf ("|\n");
				}
				else{
					if ((j >1 && j<= 1+space_needed) || (j < (2*n+1) && j >= (2*n+1)-space_needed ))
						printf (" ");
					else	
						printf("%d",i);
				}

			}


		}
	}


	for (int i =n-1 ; i >= 1 ; i--)
	{
		space_needed=((2*n+1)-2-(2*i-1))/2;
		for (int j=1 ; j <= (2*n)+1 ; j++)
		{
			if (j == 1 )
			{
				printf ("|");
			}else
			{
				if (j == (2*n)+1 )
				{
					printf ("|\n");
				}
				else{
					if ((j >1 && j<= 1+space_needed) || (j < (2*n+1) && j >= (2*n+1)-space_needed ))
						printf (" ");
					else	
						printf("%d",i);
				}

			}


		}
	}



	for (int i =1 ; i <= (2*n)+1 ; i++)
	{
		printf ("-");
	}
	printf ("\n");

}
