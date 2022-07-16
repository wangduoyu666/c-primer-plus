#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP'#'
int main(void)
{
char c;
int space_num = 0;
int break_lines = 0;
int n_words = 0;
int other_words = 0;
bool inword = false;
printf("enter text to be analyzed(# to terminate): \n");
while ((c =getchar())!=STOP)
{
other_words++;
if(c=='\n')
break_lines++;
}
if(isspace(c)&&inword)
inword = false;
space_num++;
printf("words= %ld,lines = %d,space = %d,",other_words,break_lines,space_num);
return 0;
}
