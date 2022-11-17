#include <stdio.h>
int main()
{
 float xa,ya,za;
 float xb,yb,zb;
 float dot_product, xcp,ycp,zcp; // cp is short for cross product
 scanf ("%f %f %f",&xa,&ya,&za);
 scanf ("%f %f %f",&xb,&yb,&zb);


 dot_product = (xa*xb) + (ya*yb) + (za*zb);
 printf("%.2f\n", dot_product);

 xcp = (ya*zb) - (za*yb) ;
 ycp = (za*xb) - (xa*zb) ;
 zcp = (xa*yb) - (ya*xb) ;
 printf("%.2f %.2f %.2f", xcp,ycp,zcp);

 return 0;
}
