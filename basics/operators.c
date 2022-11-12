#include <stdio.h>
int main()
{
	int a = ((1+2)*(3))%(2); // math operators
			      // % is for baghimande
			      // 2 remainder operators
			      // 5/2 is 2 if both numbers are integeres
			      // 5.5/5 is 1.1 
	int x = 5 ;
	a = ++x ;	      // first x=x+1 then puts the value to a
	printf("%d",x);
	int b = x++;	      // first uses x's value and puts it to b 
			      // then adds 1 to x
	printf("%d",x);	
	
	
	printf("a= %d,b=%d",a,b );
	return 0;
}
