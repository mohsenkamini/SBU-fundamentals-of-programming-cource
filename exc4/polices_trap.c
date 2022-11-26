#include <stdio.h>


int main () {

	int limit2= (5*60)+(40), limit3= (12*60)+15;
	int min1,min2,min3,sec1,sec2,sec3,sp1,sp2,sp3;
	int fine1=80000, fine2=150000, total_fine=0;
	int time2,time3; // this converts 2 and 3 to seconds

	scanf ("%d:%d %d",&min1,&sec1,&sp1);
	scanf ("\n%d:%d %d",&min2,&sec2,&sp2);
	scanf ("\n%d:%d %d",&min3,&sec3,&sp3);

	time2=sec2+(min2*60);
	time3=sec3+(min3*60);

	if ( sp1 > 60 )
		total_fine+=fine1;

	if (sp2 > 60)
		total_fine+=fine1;
	else
	{
		if (time2 < limit2 )
			total_fine+=fine2;

	}

	if (sp3 > 60)
		total_fine+=fine1;
	else
	{
		if ((time3 - time2) < limit3 )
			total_fine+=fine2;
	}
	printf ("%d", total_fine);


}


