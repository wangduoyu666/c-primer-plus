#include <stdio.h>
#define C_PER_I   0.39
#define C_PER_FT  0.032
int main(void)
{
float cent;
float inches;
float feet;
printf("enter a height in centimeters(<=0 to quit): ");
scanf("%f",&cent);
while(cent>0)
{
inches = cent* C_PER_I;
feet = cent* C_PER_FT;
printf("%.1f cent = %.2f feet , %.2f inches.\n", cent,feet,inches);
printf("enter a height in centimeters(<=0 to quit): ");
scanf("%f",&cent);
}
return 0;
}
