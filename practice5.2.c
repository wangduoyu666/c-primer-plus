# include <stdio.h>
int main(void)
{
int n;
int k;
printf("enter a num(q to quit):");
scanf("%d", &n);
k=n+10;
while(n<=k)
{
    n++;
printf("%6d ",n);
}
return 0;
}
