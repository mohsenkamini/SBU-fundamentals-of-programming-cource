#include <stdio.h>
int main()
{
 int y1,m1,d1;
 int y2,m2,d2,sum;
 scanf ("%d/%d/%d",&y1,&m1,&d1);
 scanf ("%d/%d/%d",&y2,&m2,&d2);
 
 sum = ((y2 - y1) * 30 * 12 ) + ((m2 - m1) * 30 ) + (d2 - d1) + 1;
 printf("%d", sum);
 return 0;
}
