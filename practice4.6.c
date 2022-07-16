# include <stdio.h>//名字是变量，字符宽度也是变量，那么要用到数组？结构？联合？反正是变量就对了
# include <string.h>//fname[last.num]  fname[first.num] lname[first.num] fname[last.num] 再赋到字段变量*上去
int main(void)
{
char fname[40];
char lname[40];
printf("enter your fname and lname:\n");
scanf("%s  %s",fname,lname);

printf("%-d  %-d\n",strlen(fname),strlen(lname));
printf("%d  %d\n",strlen(fname),strlen(lname));
return 0;
}
