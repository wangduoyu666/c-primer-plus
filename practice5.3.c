#include <stdio.h>//��һ˵һ�������д��̫���ˣ�û�ۿ�
#define D_PER_W 7
int main(void)
{
int days;
int weeks;
int left;
printf("please enter days(<=0 to quit):\n");
scanf("%d",&days);
while(days>0 )
{

 weeks = days / D_PER_W;
 left = days % D_PER_W;
printf("%d days are  %d weeks %d left.\n", days,weeks,left );
printf("please enter next value(<=0 to quit):\n");
scanf("%d",&days);
}
return 0;
}
