# include <stdio.h>//˵ʵ���Ҿ��Ǿ������������������ˢ�ģ���ǰԤϰһ��
int main(void)
{
int n;
int sum1;
int limit;
printf("enter a limit:");
scanf("%d", &limit);
for (n=1;n<limit;n++)
{
    sum1+=n;
    printf("%d", sum1);
}
    return 0;
}


