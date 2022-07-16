# include <stdio.h>
double larger_of(a,b);
double main(void)
{
double a,b;
printf("enter a pair of integers(q to quit):\n");
while (scanf("%lf %lf",&a,&b)==2)
{
    printf("the larger of %lf and %lf is %f.\n",
           a,b,larger_of(a,b));
           printf("%lf=%lf=%lf\n",a,b,larger_of(a,b));
           printf("enter a pair of integers(q to quit):\n");
}
printf("bye.\n");
return 0;
}
double larger_of(double a,double b)
{
    double larger_of;
    if(a>b)
        larger_of=a;
    else
        larger_of=b;
    return larger_of;
}

