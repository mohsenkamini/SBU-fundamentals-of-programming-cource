#include <stdio.h>



int main (){

	float x,accuracy,unsigned_term=1,term=1,sum=1,unsigned_x;
	int i=1;
	scanf ("%f\n%f",&x,&accuracy);
	if (x < 0)
		unsigned_x=-x;
	else
		unsigned_x=x;

	for (int i=1 ; ((unsigned_term*unsigned_x)/i) >= accuracy ; i++)
//	do
	{
		term*=x;
		term/=i;
		sum+=term;
		if (term < 0 )
			unsigned_term=-term;
		else
			unsigned_term=term;
//		i++;
	//	printf ("%d term: %.3f sum: %.3f\n",i,term,sum);
	}	
//	}while (term >= accuracy);

	printf("%.3f",sum);





}
