#include <stdio.h>//�о������õ����������
int main(void)
{
    char ch;
    int m,n;
    for (m=1;m<=6;m++)
    {
        for (n=1 ,ch='F'; n<=m; n++,ch--)
        printf("%c",ch);
        printf("\n");
    }
    return 0;
}

