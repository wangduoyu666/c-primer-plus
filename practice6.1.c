#include <stdio.h>//��һ��д��
#define CHARS 26
int main(void)
{
char ch;
for(ch='A';ch<('A'+CHARS);ch++)
printf("%2c",ch);
printf("\n");
printf("TK,you have a strong heart!");
return 0;
}


