#include <stdio.h>
int main()
{
 double a,b;
 scanf ("a:%lf b:%lf",&a,&b); // input like printf
 printf("%.2lf\n", a*b);
 printf("%.2lf\n", a/b);
 printf("%.2lf\n", a+b);
 printf("%.2lf", a-b);
 return 0;
}
