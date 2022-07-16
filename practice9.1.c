#include <stdio.h>
int min(x,y);
int main(void)
{
int x,y;
printf("enter tow nums(q to quit):\n");
while(scanf("%d  %d",&x,&y)==2)
{
printf("the lesser of %d and %d is %d.\n",
x,y,min(x,y));
printf("enter two nums(q to quit):\n");
}
printf("bye.\n");
return 0;
}
int min(x,y)
{
int min;
if(x<y)
min = x;
else
min = y;
return min;
}
