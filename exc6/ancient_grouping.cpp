#include <iostream>
#include <cmath>
using namespace std;
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


int reverse_number (int number){

	int result=0;
	for (int i =1 ; i <= number_of_digits(number) ; i++){
		int pow_10_i=pow(10,i);
		int digit_i_om= (number % pow_10_i) / pow(10,i-1);
		result+= (digit_i_om * pow(10,number_of_digits(number)-i));
	}
//	cout << result;
	return result;

}

bool is_palindrome (int number){
	
	bool result;
	int temp = reverse_number(number);
//	cout << " temp: " << reverse_number(number) << "number " << number<< endl;
	if (number == temp)
	{
		result=true;
//		cout << " equal " << number << " == " << reverse_number(number) << endl;
	}
	else
	{
//		cout << " not equal " << number << " != " << reverse_number(number) << endl;
		result=false;
	}
	return result;
}

int lesser_palindrome (int number){
	int i ;
	for (i= number; is_palindrome(i) != 1 ; i--);
	//	cout << "something else";
//	{
//		if (is_palindrome(i))
//	}
	return i;
}


int greater_palindrome (int number){
	int i;
	for (i= number; is_palindrome(i) != 1  ; i++);
//		cout << i << " " << is_palindrome(i) << " ";
//	{
//		if (is_palindrome(i))
//	}
	return i;
}

int remaining_of_difference_by_26 (int number){

	return ((greater_palindrome(number)-lesser_palindrome(number)) % 26);
}

int translate_ascii (int remaining)
{
	char temp='A';
	return remaining+temp;
}

void if_not_last_number_endl(int i, int number_of_inputs) {
	
	if (i+1 <= number_of_inputs){
		cout << endl;
	}
}

int main () {

	int number_of_inputs,input_number;
	cin >> number_of_inputs;
	for (int i=1 ; i <= number_of_inputs ; i++)
	{
		cin >> input_number;
//		cout << is_palindrome(input_number) << endl;
//		cout << reverse_number(input_number);
//		cout << "1 greater:" << greater_palindrome(input_number) << endl;
//		cout << "2 lesser:" << lesser_palindrome(input_number);
		if (is_palindrome(input_number))
		{
			cout << '0';
			if_not_last_number_endl(i,number_of_inputs);
		}
		else
		{
			cout << char(translate_ascii(remaining_of_difference_by_26(input_number)));
			if_not_last_number_endl(i,number_of_inputs);
		}
	}
}









