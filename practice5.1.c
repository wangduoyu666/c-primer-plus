//������Ϊ�����ⶫ����ȫ���ǿ�����ȡʤ
//��������
//�ô��������������ⲻ�տ�ʼд���������
//Ҫ���̫����ѽ 2.9
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

