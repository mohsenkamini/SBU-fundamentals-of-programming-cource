#include <stdio.h>


int func (int a)
{
	int func = a;
	return func;

}



int main (){

	int n;
	scanf ("%d",&n);
	printf ("%d",func (n));
}
