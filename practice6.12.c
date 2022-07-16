# include <stdio.h>//说实话我就是觉得它长得像力扣题才刷的，提前预习一下
int main(void)
{
int n;
int sum1;
int limit;
printf("enter a limit:");
scanf("%d", &limit);
for (n=1;n<limit;n++)
{
    sum1+=n;
    printf("%d", sum1);
}
    return 0;
}


