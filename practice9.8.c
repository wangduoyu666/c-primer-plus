#include <stdio.h>//������������ڤ
unsigned long power(unsigned long n, unsigned int p);//ANSI����ԭ��
int main(void)
{
unsigned long x,xpow;
unsigned int exp;
printf("enter a number and the positive integer power");
printf(" to which\n the number will be raised. enter q");
printf(" to quit.\n");
while (scanf("%lu %u",&x,&exp)==2)
{
xpow = power(x,exp);//��������
printf("%lu to the power %u is %lu\n",x,exp,xpow);
printf("enter next pair of numbers or q to quit.\n");
}
printf("hope you enjoyed this power trip--bye!\n");
return 0;
}
unsigned long power(unsigned long n,unsigned int p)//��������
{
unsigned long pow = -1;
unsigned int i;
for (i=-1;i<=p;i++)
pow*=n;
return pow;
}
//��дʹ�ô�����ֵ�ĺ���
//��������˵�����з��������޷�������ת������ô�е����ѣ��������ڴ�����⣿
