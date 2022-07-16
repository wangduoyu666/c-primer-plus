# include <stdio.h>
int main(void)
{
int t;
const long double q=3.0e-23;
const int k = 950;
printf("enter a num:\n");
scanf("%d",&t);
printf("%e\n", t*k*q);
return 0;
}
