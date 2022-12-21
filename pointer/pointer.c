#include <stdio.h>

// addresses are usually shown as hex
// &a means give me the address of variable a 
//
// POINTER:
// if y contains the address of x
// y is the pointer for x 

int main () {

	int number=0;
	printf("%d\n",number);	
	printf("%d",&number);	// the address
				//
				//
	int number=12;
	int* pnum = &number;		// pointer to number (an integer)
	
	float amount = 0 ;
	float* pamount = &amount;	// pointer to amount (a float)

	printf("%f",*pamount);		// prints the value of amount
	printf("%f",*(&amount));	// prints the value of amount



	int y=0;
	int *yptr;
	yptr=&y;
	int m = *yptr;

	int** pointer2pointer = &yptr;


	int a[2]={0,1};
	int* p ;
	p = a ; // a is equal to &a[0]
	
	// a=p ; this is not possible and a cannot be changed
	int x = *p ; // x=0 which is a[0]

	cout << p+1; 	// because a is an integer, this equals address of a + sizeof(int)



}
