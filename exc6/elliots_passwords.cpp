#include <iostream>
#include <cmath>
using namespace std;


int menu () {
	
	int input;
	cout << "1-check 2-generate 3-exit"<< endl;
	cin >> input;
	return input;
}

int number_of_digits (int number){

	// number_of_digits (10) returns 2
	// number_of_digits (1345) returns 4

	int i;
	long int powered_10=10;
	for (i=1 ; (number % powered_10) != number ; i++){
		powered_10*=10;
	}
	return i;

}

int separate_from_left (unsigned int number, int how_many_digits){

	// separate_from_left (5401,2) returns 54
	// separate_from_left (435601,3) returns 435
	// separate_from_left (32,5) returns 32
	if ((number_of_digits(number) - how_many_digits ) < 0 )
		return number;

	return number/pow( 10 , number_of_digits(number) - how_many_digits );
}

int cut_from_left (unsigned int number, int how_many_digits){

	// cut_from_left (5401,2) returns 1
	// cut_from_left (435601,3) returns 601
	unsigned long int powered_10=pow( 10 , number_of_digits(number) - how_many_digits );
	return number % powered_10; 
	
}



void check (int password) {

	int base=separate_from_left (password,1);
	password = cut_from_left(password,1);
	bool flag=true;
	int digits_left=number_of_digits(password);	
	do {
		if (separate_from_left(password,number_of_digits(2*base)) != 2*base )
		{
			flag=false;
			break;
		}
		else
		{
			digits_left-=number_of_digits(2*base);
			if (digits_left >= number_of_digits(4*base) )
			{
				password=cut_from_left(password,number_of_digits(2*base));
				base*=2;
			}
			else {
				if (digits_left == 0 )
					break;
				else {
					flag=false;
					break;
				}
			}
			
		}


	}while (digits_left);

	switch (flag) {
	
		case 1:
			cout << "the password is valid"<< endl;
			break;
		case 0:
			cout << "the password is invalid" << endl;
			break;
		default:
			cout << "something's off";

	}
}

int append_to_right (int base, int to_be_appended) {

	return (base*( pow( 10,number_of_digits(to_be_appended) ) )) + to_be_appended;
}

int generate (int base , int ratio , int maximum_length){

	int length=1,number=base;
	while (length+number_of_digits(base*ratio) <= maximum_length)
	{
		number=append_to_right (number,base*ratio);
		length=number_of_digits(number);
		base*=ratio;
	}
	return number;

}





int main () {

	int choice;
	int password;
	int base,ratio,maximum_length;

	while ((choice=menu()) != 3 )
	{
		switch (choice){
			
			case 1:
			       cin >> password;
			       check(password);
			       break;
			case 2:
			       cin >> base >> ratio >> maximum_length;
			       cout << generate(base,ratio,maximum_length) << endl;
			       break;
			default:
			       cout << "invalid choice" << endl;
			       break;
		}
	}

}




