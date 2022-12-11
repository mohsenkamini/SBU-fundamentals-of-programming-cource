#include <iostream>
using namespace std;

int sum_of_numbers (int n){
	
	if (n==0)
		return 0;
	int input;
	cin >> input ;
	return input + sum_of_numbers(n-1);
}


int main () {

	int n;
	cin >> n;

	cout << sum_of_numbers(n);

}

