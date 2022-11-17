#include <stdio.h>
int main()
{
 int a,decimal_converted_of_reverse, f;
 scanf ("%d",&a);
 decimal_converted_of_reverse = ( a/100 ) + (( (a/10) % 10 )*2) + ( (a%10) * 4 );
 f = ((3*decimal_converted_of_reverse) * (decimal_converted_of_reverse + 1) / 2) + 35;
 printf("%c", f);
 return 0;
}
