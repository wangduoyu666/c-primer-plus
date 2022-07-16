#include <stdio.h>

int main()
{
    char input;
    int line,s;
    int u,d;

    printf("Pleaes enter a word: ");
    scanf("%c",&input);
    int line_num = input - 65 + 1;             //当输出一个字母后，一共应输出几行
    for(line = 1;line <= line_num;line++)
    {
        for(s = 1;s <= line_num - line;s++)    //控制每行打印空格数量
            printf(" ");
        for(u = 0;u < line;u++)                //控制递增打印顺序，打印至input
            printf("%c",'A'+u);
        for(d = line;d > 1;d--)                //控制递减打印顺序
            printf("%c",'A'+d-2);              //input的下一个字符
        printf("\n");
    }
    return 0;
}
