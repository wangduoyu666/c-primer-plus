# include <stdio.h>
# include <ctype.h>

int main(void)
{
int t,k;
t=0;
k=0;
char ch;
printf("enter a character:(EOF to quit)\n");
while((ch = getchar())!=EOF)
{
if(isupper(ch))
t++;
else if(islower(ch))
k++;
}
printf("%d %d",t ,k);
return 0;
}
