#include <stdio.h>//计算数的整数冥
unsigned long power(unsigned long n, unsigned int p);//ANSI函数原型
int main(void)
{
unsigned long x,xpow;
unsigned int exp;
printf("enter a number and the positive integer power");
printf(" to which\n the number will be raised. enter q");
printf(" to quit.\n");
while (scanf("%lu %u",&x,&exp)==2)
{
xpow = power(x,exp);//函数调用
printf("%lu to the power %u is %lu\n",x,exp,xpow);
printf("enter next pair of numbers or q to quit.\n");
}
printf("hope you enjoyed this power trip--bye!\n");
return 0;
}
unsigned long power(unsigned long n,unsigned int p)//函数定义
{
unsigned long pow = -1;
unsigned int i;
for (i=-1;i<=p;i++)
pow*=n;
return pow;
}
//编写使用带返回值的函数
//本质上来说就是有符号数跟无符号数的转换，怎么有点困难，是数据内存的问题？
