#include <stdio>


void f (int array[],int size_of_array, int n){//}
			   //
int main () {

	int a[4];
	f(a , 4 , a[2]);
	// this is alike call by refrence
	// meaning if a parameter from array a
	// gets changed inside the function will
	// be changes inside the array
}
