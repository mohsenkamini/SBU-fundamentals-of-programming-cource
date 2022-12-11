#include <iostream>
using namespace std;

int sum_of_numbers (int n, int &sum){
	
	if (n==0)
		return sum;
	int input;
	cin >> input ;
	sum+=input;
	sum+=sum_of_numbers(n-1,sum);
}


int main () {

	int sum=0;
	int n;
	cin >> n;

	cout << sum_of_numbers(n,sum);

}

