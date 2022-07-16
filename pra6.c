#include <stdio.h>//代码中把int类型与char类型相加，编译器可能警告会损失有效数字
int main(void)
{
int i;
char ch;
for(i= 0,ch='A';i< 4;i++,ch += 2 * i)
printf("%c",ch);
return 0;
}
