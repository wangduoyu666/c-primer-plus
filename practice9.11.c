# include <stdio.h>//û�¶�������ģ�����ʱ�䲻�����ֲ���ֻѧ��ôһ�죬��Ȼ���ڵĴ���д��������ɶ
int main(void)//�Ƚ�����˵Ŀ������绹��,�ٹ�һ�����㻹��ˮƽ����ȷʵӦ�úú÷�˼�����ˣ����¿�ͷ�ѣ����ͣ�
{
   int i, n;
   long unsigned int f1,f2,f;
   printf("\n How many Fibonaccis you want?");
   scanf("%d",&n);
   f1 = 0;
   f2 = 1;
   if(n==1)
    printf("\n %lu", f1);
   else
    if(n==2)
   {
       printf("\n %lu", f1);
       printf("\n%lu", f2);
   }
   else
   {
       printf("\n %lu", f1);
       printf("\n %lu", f2);
       for (i=3; i<=n; i++)
       {
           f=f1+f2;
           printf("\n %lu", f);
           f1 = f2;
           f2 = f;
       }
   }
}
