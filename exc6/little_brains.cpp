#include <iostream>
#include <cmath>
using namespace std;


int number_of_digits (unsigned int number){

	// number_of_digits (10) returns 2
	// number_of_digits (1345) returns 4

	int i,powered_10=10;
	for (i=1 ; (number % powered_10) != number ; i++){
		powered_10*=10;
	}
	return i;

}

int separate_from_left (unsigned int number, int how_many_digits){

	// separate_from_left (5401,2) returns 54
	// separate_from_left (435601,3) returns 435
	return number/pow( 10 , number_of_digits(number) - how_many_digits );
}

int cut_from_left (unsigned int number, int how_many_digits){

	// cut_from_left (5401,2) returns 1
	// cut_from_left (435601,3) returns 601
	int powered_10=pow( 10 , number_of_digits(number) - how_many_digits );
	return number % powered_10; 
	
}

int armans_mind (unsigned int input,unsigned int limit) {

	bool flag=false;
	while (!flag)
	{
		if (input > limit)
		{
//			cout << "1. input: " << input << " limit: " << limit << " end1" << endl;
			if (separate_from_left (input,number_of_digits(limit)) > limit )
			{
				unsigned int input_zero_check = cut_from_left (input,number_of_digits(limit)-1);
				if (input_zero_check != 0)
				{
					cout << separate_from_left (input,number_of_digits(limit)-1) << "-";
					input = cut_from_left (input,number_of_digits(limit)-1);
				}
				else
				{
					cout << separate_from_left (input,number_of_digits(limit)-1);
					flag=true;
				}
//			cout << "2. input: " << input << " limit: " << limit << " end2" << endl ;
			}
			else
			{
				unsigned int input_zero_check = cut_from_left (input,number_of_digits(limit));
				if (input_zero_check != 0)
				{	
					cout << separate_from_left (input,number_of_digits(limit)) << "-";
					input = cut_from_left (input,number_of_digits(limit));
				}
				else
				{
					cout << separate_from_left (input,number_of_digits(limit));
					flag=true;
				}
//			cout << "3. input: " << input << " limit: " << limit << " end3" << endl ;
				
			}
		}
		else
		{
			cout << input << endl;
			flag=true;
		}
	}
	return 0 ;
}



int main () {

	unsigned int n;
	unsigned int limit,input;

	cin >> n >> limit ;
	
//	cout << number_of_digits (n) << "\n"<< cut_from_left (n,3);
		
	for (int i=1; i <= n ; i++){
	
		cin >> input;
		armans_mind(input,limit);

	}


}



