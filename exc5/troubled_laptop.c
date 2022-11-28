#include <stdio.h>



int main () {

	int max_index;
	float m,input,max;
	scanf ("%f",&m);
	for (int i=1; i <= m ; i++)
	{
		scanf ("\n%f",&input);
		if (i == 1)
		{
			max=input;
			max_index=i;
		}
		if (input > max)
		{
			max=input;
			max_index=i;
		}
	}

	printf ("%.3f\n",max);
	printf ("%d",max_index);

} 
