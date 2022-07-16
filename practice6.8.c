# include <stdio.h>
int main(void)
{
float t,k;
float m,n;
printf("enter two num:\n");
scanf("%f   %f",&t , &k);
while(t>0 && k>0)
{
printf("enter two num:\n");
scanf("%f   %f",&t , &k);
m=t-k;
n=t*k;
printf("%.2f", m/n);
printf("\n");
}
return 0;
}
