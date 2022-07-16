#include <stdio.h>//希望自已用自已的思维写出来，在学了数组和函数之后
int main (void)
{
int m,n,i;
char ch;
for (m = 0,ch='A';m<=25;m++)
{
for (n=0,ch='A';n<=m;n++,ch++)
for (i=0,ch='A'+(n-i);i<=n;i++,ch--)
printf("%c",ch);
printf("\n");
}
return 0;
}
