# include <stdio.h>//�����Ǳ������ַ����Ҳ�Ǳ�������ôҪ�õ����飿�ṹ�����ϣ������Ǳ����Ͷ���
# include <string.h>//fname[last.num]  fname[first.num] lname[first.num] fname[last.num] �ٸ����ֶα���*��ȥ
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
