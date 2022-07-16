#include <stdio.h>//再改改，或者等学了函数之后再来改
char get_choice(void);//还是那句话，多写代码，代码写多了自然就有思维了
char get_first(void);
float get_float(void);
void count1(void);
void count2(void);
int main(void)
{
int choice;
float sum1;
float sum2;
while ((choice = get_choice()) !='q')
{
switch (choice)
{
case'a':count1();
break;
case's':putchar('\a');
break;
case'm':putchar('\d');
break;
case'd':count2();
default: printf("progarm error!\n");
break;
}
}
printf("bye.\n");
return 0;
}
void count1(void)
{
float n,m;
float sum1;
printf("enter first number:");
n=get_float();
printf("enter second number:");
m = get_float();
sum1 = n+m;
printf("%f+%f=%.1f\n",n,m,n+m);//这里可以用sum(int a,int b)函数，return a+b;
while(getchar()!='\n')
continue;
}
void count2(void)
{
float t,k;
float sum2;
printf("enter first number:");
t=get_float();
printf("enter second number:");
k = get_float();
    sum2=t/k;
printf("%f/%f=%.1f\n",t,k,t/k);
while(getchar()!='\n')
continue;
}
char get_choice(void)
{
int ch;
printf("enter the operation of your choice:\n");
printf("a.add                  s.subtract\n");
printf("m.multiply             d.divide\n");
printf("q.quit\n");
ch = get_first();
while((ch<'a'|| ch>'s')&& ch !='q')
{
printf("please respond with a,s,m,d,or q.\n");
ch = get_first();
}
return ch;
}
char get_first(void)
{
int ch;
ch = getchar();
while(getchar()!='\n')
continue;
return ch;
}
float get_float(void)
{
int input;
char ch;
while (scanf("%f", &input)!=1)
{
while((ch = getchar()) != '\n')
putchar(ch);
printf("is not an integer.\n please enter an");
printf("integer value,such as 2.5,-1.78E8,or 3:");
}
return input;
}
