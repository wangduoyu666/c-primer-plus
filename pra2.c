#include <stdio.h>
int main(void)
{
    int num,end;		// end:��ӡ������ֵ

    printf("������һ��������\n");
    scanf("%d",&num);

    end = num + 10;

    while (num <= end)
    {
        printf("%d ",num);	// �����ֵ֮���ÿո�ֿ�
        num++;
    }

    printf("\n");

    return 0;
}
