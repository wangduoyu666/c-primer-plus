#include <stdio.h> //算了算了，留着以后来检查吧
int main(void)
{
int num;
int t=0;
int k=0;
int even_total;
int odd_total;
double average_even,average_odd;
printf("please enter num to be calculated(0 to quit):\n");
scanf("%d", &num);
while(scanf("%d",&num)==1)
{
if(num %2 ==0)
{
even_total+=num;
t++;
average_even = even_total /t;
printf("there are %d even_num and the average_even is %f\n", t , average_even);
}
else
odd_total+=num;
k++;
average_odd = odd_total /k;
printf("there are %d odd_num and the average_odd is %f",   k , average_odd);
}
printf("good job!\n");
return 0;
}

