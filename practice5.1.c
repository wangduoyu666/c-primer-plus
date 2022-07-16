//个人认为代码这东西完全不是靠数量取胜
//而是质量
//好歹还能跑起来，这不刚开始写嘛，熟能生巧
//要求别太高了呀 2.9
#include <stdio.h>
#define sum 60
int main(void)
{
    int num;
    printf("please enter a num:");
    printf("( 0 to quit):");
    scanf("%d",&num);
    while(num<60 & num!=0)
    {
        printf("please enter a num:");
        printf("( 0 to quit):");
        scanf("%d",&num);
    }
printf("goodbye!\n");
return 0;
}

