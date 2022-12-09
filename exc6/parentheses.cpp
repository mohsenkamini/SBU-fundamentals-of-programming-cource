#include <iostream>
using namespace std;

bool is_integer (char input) {

	if (input >= '0' && input <= '9') {
		
		return true;
	}
	else {
		return false;
	}
}

int integerize (char input) {

		return input - '0';
}

bool is_parantheses_open (char input, int& left_open) {

	if (input == '(' )
	{
		left_open++;
		return true;
	}
	else
		return false;
}

bool is_parantheses_close (char input,int& left_open) {

	if (input == ')' )
	{
		left_open--;
		return true;
	}
	else
		return false;
}

int main () {

	int number_of_inputs,left_open=0; 		// left_open defines the number of 
							// open parantheses opened but not closed
	int sum=0,last_integer=0;
	char input;

	cin >> number_of_inputs;

	for (int i =1 ; i <= number_of_inputs ; i++) {
		
		cin >> input;
		
		is_parantheses_open(input,left_open);
		is_parantheses_close(input,left_open);
		
		if (left_open < 0)
		{
			cout << "error";
			return 1;
		}
		if (is_integer(input)) {
			
			sum+=integerize(input);
			last_integer=integerize(input);
			
		}
	}
	if (left_open > 0)
	{
		cout << (sum-last_integer)*(last_integer);
	}
	if (left_open == 0 )
		cout << sum;

	return 0;

}



