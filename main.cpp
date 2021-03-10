#include <math.h>
#include <stdio.h>

int main(void)
{
double fraction,integer;
double a,b;
printf("1: =");
scanf("%lf",&a);
printf("2: =");
scanf("%lf",&b);
int res = (int)a*b;
printf("a-b = %lf, a*b= %d\n", a-b,res );
return 0;
}
