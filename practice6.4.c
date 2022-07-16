#include<stdio.h>//感觉自已提前学了数组的内容
int main(void)
{
 int m,n;
 char ch;
 for (m=0;m<=6;m++)
 {
     for(n=0,ch=('A'+m);n<=m;n++,ch++)
        printf("%c",ch);
        printf("\n");
 }
 return 0;
}
