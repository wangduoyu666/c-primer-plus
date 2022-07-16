#include <stdio.h>
#include <ctype.h>
#define STOP'#'
int main(void)
{
char ch;
int n=0;
printf("enter eight alphas to be transformed(# to terminate): \n");
scanf("%c", &ch);
while ((ch =getchar())!=STOP)
{
printf("the ASCII value for %c is %d",ch , ch);
ch++;
if(ch !='\n'&& n%8==0)
}
return 0;
}
