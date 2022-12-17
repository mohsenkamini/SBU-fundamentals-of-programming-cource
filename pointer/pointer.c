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
	
}
