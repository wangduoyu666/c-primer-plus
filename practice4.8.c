# include <stdio.h>
int main(void)
{
const float t=3.785;
const float k=1.609;
int m,n;
float sum;
printf("enter the m,n:");
scanf("%d  %d", &m, &n);
printf("%.1f  %.1f\n", m*t, n*k);
sum = (m*t)*(n*k);
printf("%.1f\n", sum);
return 0;
}
