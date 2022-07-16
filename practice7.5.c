# include <stdio.h>//好烦啊！以我现在的实力还轮不到我造轮子，哎！
# define STOP '#'
int main(void)
{
char ch;
int t=0;
int k=0;
printf("enter text to be analyzed(# to terminate): \n");
while((ch=getchar())!=STOP)
{
switch(ch)
{
case'.':printf("%c",'!');
t++;
break;
case'!':printf("%s","!!");
k++;
break;
default:printf("%c",ch);
}
}
printf("%d %d", t,k);
return 0;
}
