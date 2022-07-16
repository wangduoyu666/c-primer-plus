#include <stdio.h>
int main(void)
{
    int num,end;		// end:打印结束的值

    printf("请输入一个整数：\n");
    scanf("%d",&num);

    end = num + 10;

    while (num <= end)
    {
        printf("%d ",num);	// 各输出值之间用空格分开
        num++;
    }

    printf("\n");

    return 0;
}
