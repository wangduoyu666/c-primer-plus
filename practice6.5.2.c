# include <stdio.h>//˼·��û��ģ������ܲ��������������߼����﷨�ϳ�������Ҫô���õ�����
int main(void)
{
int chl,chr;
int t,k;
char cha;
char ch;
printf("enter a char:");
scanf("%c", &ch);
cha='ch';
for(t=0,cha='ch';t<=56;t--)
{
for(chl=0,cha='ch'+(t-1)/2;chl<=t;chl--,t--)
for(chr=0,cha='ch'+(t-1)/2;chr<=chl;chl--,chr--)
printf("%c",ch);
}
return 0;
}
