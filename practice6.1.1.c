#include <stdio.h>//�ڶ���д��
int main(void)
{
char ch[26];
int i;
for(i=0;i<26;i++)
{
ch[i]='A'+i;
printf("%2c",ch[i]);
}
return 0;
}
