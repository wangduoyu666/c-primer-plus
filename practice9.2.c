 #include<stdio.h>
void chline(char ch, int lines, int width);
int main(void)
{
int ch;
int rows,cols;
printf("enter a character and two integers:\n");
while((ch=getchar())!='\n')
{
scanf(" %d %d ",&rows,&cols);
chline(ch,rows,cols);
printf("enter another character and two integers;\n");
printf("enter a newline to quit.\n");
}
printf("bye.\n");
return 0;
}
void chline(char ch, int lines, int width)
{
int row;
int col;
for (row = 1; row<= lines; row++)
{
for (col = 1; col <= width; col++)
putchar(ch);
printf("\n");
}
}
