# include <stdio.h>//这个代码还得再写写
void temp(double k);//while const
int main(void)
{
double k;
double t;
double y;
printf("enter a k:");
scanf("%f", &k);
temp(t);
temp(y);
return 0;
}
void temp(double k)
{
    double t,y;
t =5.0/9.0*(k-32.0);
y = t+273.16;
printf("%.2f  %.2f",t,y);
}
