# include <stdio.h>
int main(void)
{
int count,sum;
int limit;
sum =0;
count = 0;
printf("enter a limit:");
scanf("%d" ,&limit);

while (count++ <limit)
sum = sum+count;
printf("sum = %d\n",sum*sum);
return 0;
}
