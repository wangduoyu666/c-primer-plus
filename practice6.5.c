#include <stdio.h>

int main()
{
    char input;
    int line,s;
    int u,d;

    printf("Pleaes enter a word: ");
    scanf("%c",&input);
    int line_num = input - 65 + 1;             //�����һ����ĸ��һ��Ӧ�������
    for(line = 1;line <= line_num;line++)
    {
        for(s = 1;s <= line_num - line;s++)    //����ÿ�д�ӡ�ո�����
            printf(" ");
        for(u = 0;u < line;u++)                //���Ƶ�����ӡ˳�򣬴�ӡ��input
            printf("%c",'A'+u);
        for(d = line;d > 1;d--)                //���Ƶݼ���ӡ˳��
            printf("%c",'A'+d-2);              //input����һ���ַ�
        printf("\n");
    }
    return 0;
}
