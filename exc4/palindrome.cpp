#include <iostream>
using namespace std;


int main () 
{

	int n,number_of_digits,d1,d2,d3,d4,d5,d6,d7;
	bool flag=false;

	cin >> n;


	d1=n%10;
	n/=10;
	d2=n%10;
	n/=10;
	d3=n%10;
	n/=10;
	d4=n%10;
	n/=10;
	d5=n%10;
	n/=10;
	d6=n%10;
	n/=10;
	d7=n%10;
	n/=10;

	if ( d7 ==0 )
	{
		number_of_digits=6;
		if (d6 == 0 )
		{
			number_of_digits=5;
			if (d5 == 0 )
			{
				number_of_digits=4;
				if (d4 == 0 )
				{
					number_of_digits=3;
					if (d3 == 0 )
					{
						number_of_digits=2;
						if (d2 == 0 )
						{
							flag=true;
						}else
						{
							if (d2 == d1)
							{
								flag=true;
							}
						}


					}else
					{
						if (d3 == d1)
						{
							flag=true;
						}
					}

		
				}else
				{
					if (d4 == d1)
					{
						if (d3==d2)
						{
							flag=true;
						}
					}
				}


			}else
			{
				if (d5 == d1)
				{
					if (d4==d2)
					{
						flag=true;
					}
				}
			}

		}else
		{
			if (d6 == d1)
			{
				if (d5==d2)
				{
					if (d4==d3)
					{
						flag=true;
					}
				}
			}
		}
	
	}
	
	else
	{
		if (d7 == d1)
		{
			if (d6==d2)
			{
				if (d5==d3)
				{
					flag=true;
				}
			}
		}
	}



	// final stage
	//
	
	if (flag == true)
		printf ("YES");
	else
		printf ("NO");



}


