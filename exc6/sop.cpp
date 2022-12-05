#include <iostream>
using namespace std;

// a % b
int remaining (int a , int b){

	int result;
	result= a - ((a / b)*b);
	return result;

}

int main () {
	int a,b;
	long int sum=0;
	cin >> a >> b ;
	for (int i = b ; i <= a ; i++)
	{
		if (remaining(i,b) == 0)
			sum+=i;

	}
	cout << sum;
}


