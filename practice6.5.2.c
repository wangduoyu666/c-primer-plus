# include <stdio.h>//思路是没错的，就是跑不起来，估计是逻辑和语法上出了问题要么就用到索引
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
