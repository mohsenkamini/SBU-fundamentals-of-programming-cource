#include <iostream>
using namespace std;

double pow(float base, float power) 
{
	double result=1.0;
	if (power == 0.0 )
		return result;
	if (base == 1 )
		return result;
	if (power > 0.0 )
	{
		for (int i =1 ; i <= power ; i++ )
			result*=base;
	}
	else
	{
		for (int i = -1 ; i >= power ; i--)
			result/=base;
	}
	return result;
}

int number_of_digits (unsigned long int number){

	// number_of_digits (10) returns 2
	// number_of_digits (1345) returns 4

	int i;
	unsigned long int powered_10=10;
	for (i=1 ; (number % powered_10) != number ; i++){
		powered_10*=10;
	}
	return i;

}

int separate_from_left (unsigned long int number, int how_many_digits){

	// separate_from_left (5401,2) returns 54
	// separate_from_left (435601,3) returns 435
	// separate_from_left (32,5) returns 32
	if ((number_of_digits(number) - how_many_digits ) < 0 )
		return number;

	return number/pow( 10 , number_of_digits(number) - how_many_digits );
}

unsigned long int cut_from_left (unsigned long int number, int how_many_digits){

	// cut_from_left (5401,2) returns 1
	// cut_from_left (435601,3) returns 601
	unsigned long int powered_10=pow( 10 , number_of_digits(number) - how_many_digits );
	return number % powered_10; 
	
}

unsigned long int abbases_language (unsigned long int input) {

	unsigned long int result=0;
	unsigned long int temp=1;
	unsigned long int how_many_temp=0;
	unsigned long int nod=number_of_digits(input); // had to do this since we're changing input 
								    // inside the loop which breaks the loop
								    // consition
	for (int i=1 ; i<= nod;i++ )
	{
//		cout << "inside loop, point 1 i: "<< i <<  endl;
		if (temp == separate_from_left(input,1))
		{
//			cout << "inside loop, point 2 "<< endl;
			how_many_temp++;
			input=cut_from_left(input,1);

			if (temp == separate_from_left(input,1))
			{
//				cout << "inside loop, point 3 "<< endl;
				continue;
			}
			else
			{
//				cout << "inside loop, point 4 "<< endl;
				result*=100;
				result+= how_many_temp*10 + temp;
				how_many_temp=0;
			}
		}
		else 
		{
//			cout << "inside loop, point 5 "<< endl;
			temp=separate_from_left(input,1);
			how_many_temp=1;
			input=cut_from_left(input,1);
//			cout << "inside loop, point 5 temp:"<< temp <<" how_many: "<<how_many_temp << " input: " << input << " separate_from_left(input,1): " << separate_from_left(input,1) << endl;
			if (temp == separate_from_left(input,1))
			{
//				cout << "inside loop, point 6 "<< endl;
				continue;
			}
			else
			{
//				cout << "inside loop, point 7 "<< endl;
				result *= 100;
				result += how_many_temp*10 + temp;
				how_many_temp=0;

			}
		}
	}
	return result;
}

unsigned long int abbases_series (int n)
{
	if (n ==1){
		return 1;
	}
	return abbases_language(abbases_series(n-1));	

}


int main () {

	unsigned long int input,input2;
	//float input,input2;
	cin >> input;


//	cout << abbases_language(input) << endl ;
	for (int i =1 ; i <= input; i++)
	{
		cout << abbases_series(i);
		if (i+1 <= input)
			cout << endl;
	}
	return 0 ;
}
