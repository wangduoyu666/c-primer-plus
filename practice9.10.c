#include <stdio.h>//力扣题会有的吧，到时候直接刷力扣题
void to_base (unsigned long n);
int main(void)
{
unsigned long number;
printf("enter an integer (q to quit):\n");
while (scanf("%lu",&number)==1)
{
printf("base equivalent:");
to_base(number);
putchar('\n');
printf("enter an integer (q to quit):\n");
}
printf("done.\n");
return 0;
}
void to_base(unsigned long n)
{
int r;
r = n%8;
if(n>=1)
to_base(n / 8);

return;
}
