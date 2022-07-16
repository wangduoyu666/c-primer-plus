# include <stdio.h>
# define STOP '#'
int main(void)
{
char ch;
int t=0;
int k=0;
printf("enter text to be analyzed(# to terminate): \n");
while((ch=getchar())!=STOP)
{
if(ch== '.')
{
t++;
printf("%c",'!');
}
 else if(ch=='!')
 {
k++;
printf("%s", "!!");
 }
else
    printf("%c",ch);
}
printf("%d %d", t,k);
return 0;
}
