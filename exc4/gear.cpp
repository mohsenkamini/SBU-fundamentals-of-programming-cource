#include <iostream>
using namespace std;

int main () {

	int n,min,max;
	float m ;
	cin >> n >> m ;
	switch (n) {
	


		case 1:
		  if ( 0 <= m && m < 20 )
			  printf ("Dande Doroste!");
		  else
			  printf ("Dande Bede!");
		  break;




		case 2:
		  min= 20; max = 50;
		  if ( min <= m && m < max )
			  printf ("Dande Doroste!");
		  else{
		  	if ( m < min )
				printf ("Dande Kam Kon!");
			else
				printf ("Dande Bede!");
		  }
		  break;


		case 3:
		  min= 50; max = 70;
		  if ( min <= m && m < max )
			  printf ("Dande Doroste!");
		  else{
		  	if ( m < min )
				printf ("Dande Kam Kon!");
			else
				printf ("Dande Bede!");
		  }
		  break;



		case 4:
		  min= 70; max = 90;
		  if ( min <= m && m < max )
			  printf ("Dande Doroste!");
		  else{
		  	if ( m < min )
				printf ("Dande Kam Kon!");
			else
				printf ("Dande Bede!");
		  }
		  break;




		case 5:
		  min= 90;
		  if ( min <= m )
			  printf ("Dande Doroste!");
		  else{
		  	if ( m < min )
				printf ("Dande Kam Kon!");
		  }
		  break;
	}
}
