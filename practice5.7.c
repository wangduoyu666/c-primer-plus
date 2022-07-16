# include <stdio.h>
void cube(double n);
int main(void)
{
double n;
n = 4.456;
cube(n);
return 0;
}
void cube(double n)
{
printf("%.2f", n*n*n);
}
