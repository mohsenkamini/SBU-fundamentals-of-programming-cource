#include <iostream>
using namespace std;

void fill_the_array_with_cin (float grades[],int n) 
{
	for (int i =0 ; i < n ; i++)
		cin >> grades[i];
}

float sum (float grades[],int n)
{
	float result=0;
	for (int i =0 ; i < n ; i++)
		result+=grades[i];
	return result;

}

float average (float sum, int n) {

	return sum/n;
}

int greater_than_average_searcher (float average,float grades[],int n) {

	int result=0;
	for (int i = 0 ; i < n ; i++)
	{
		if (grades[i] > average)
			result++;
	}
	return result;
}


int main () {

	int n;
	float grades[100];

	cin >> n;
	
	fill_the_array_with_cin(grades,n);
	
	cout << greater_than_average_searcher ( average(sum(grades,n),n) , grades, n);

}

