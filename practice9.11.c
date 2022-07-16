# include <stdio.h>//没事儿，别灰心，还有时间不是吗？又不是只学这么一天，虽然现在的代码写的像坨那啥
int main(void)//先借鉴别人的咯，还早还早,再过一个月你还这水平，那确实应该好好反思自已了，万事开头难，加油！
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
