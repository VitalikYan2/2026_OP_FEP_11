#include <stdio.h>
#include <math.h>
int main(void)
{
double a;
double b;
double c;
double D;

printf("input a, b, c");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);

D=(pow(b,2))-(4*a*c);

double x1=(-b+sqrt(D))/2*a;
double x2=(-b+sqrt(D))/2*a;

printf("x1=%d x2=%d\n", x1,x2);
return 0;
}