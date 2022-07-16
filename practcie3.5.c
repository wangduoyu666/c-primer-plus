# include <stdio.h>
int main(void)
{
 int a;
const double verybig = 3.156e7;
printf("please enter your age:\n");
scanf("%d", &a);
printf("your age has %e seconds.\n", a*verybig);
return 0;
}
