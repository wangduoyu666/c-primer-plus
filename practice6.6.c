 #include <stdio.h>
int main(void)
{
    int n;
    int m;
    int t;
    printf("enter a m:");
    scanf("%d",&m);
    printf("enter a t:");
    scanf("%d",&t);
    for (n=m;n<t;n++)
    {
    printf("%5d   %10d      %20d\n", n , n*n,   n*n*n);
    }
    return 0;
}
