#include <stdio.h>//ϣ�����������ѵ�˼άд��������ѧ������ͺ���֮��
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
