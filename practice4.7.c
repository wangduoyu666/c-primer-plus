# include <stdio.h>//函数用起来是真的方便，各种库也是，简直了
# include <float.h>
int main(void)
{
const double n=1.0/3.0;
const float k=1.0/3.0;
printf("%.6f  %.6f\n", n, k);
printf("%.12f  %.12f\n", n, k);
printf("%.18f   %.18f\n", n, k);
printf("%d\n", FLT_DIG);
printf("%d\n",DBL_DIG);
return 0;
}
