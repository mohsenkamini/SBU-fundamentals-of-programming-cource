#include <stdio.h>




int main () {

	int eof=-1,input_high_limit=100,input_low_limit=0,i=0;
	float percentage,sum,max=0,min=100;


	do {
	
		scanf ("%f",&percentage);
		if (percentage <= input_high_limit && percentage >= input_low_limit)
		{
			i++;
			// calculate sum
			sum+=percentage;
			// find max
			if (percentage > max)
				max=percentage;
			// find min
			if (percentage < min)
				min=percentage;


		}


		
	} while (percentage != -1);
	if (i == 0)
		printf ("no percentage is entered!");
	else
	{
		printf("max: %.2f%%\n",max);
		printf("min: %.2f%%\n",min);
		printf("average: %.2f%%",sum /i );
	}




}
