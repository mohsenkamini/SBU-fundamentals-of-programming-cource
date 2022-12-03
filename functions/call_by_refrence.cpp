#include <iostream>
using namespace std;
// only in cpp
// one copy of the argument is stored as a local
// variable for the function

void f (int & x) {//...
}

void good_swap (int & x , int & y){

	int temp = x ;
	x=y;
	y=temp;
}

void bad_swap (int x , int y){

	int temp = x ;
	x=y;
	y=temp;
}



int main () {

	int x=3,y=4;
	bad_swap (x,y);
	cout << x << y;
	good_swap (x,y); // we can't put numbers in arguments. since it is call by refrence we
			 // have to put a variable name in here.
	cout << x << y;

}

