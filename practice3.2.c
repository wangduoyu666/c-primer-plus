# include <stdio.h>
int main(void)
{
int k;
printf("enter a num:");
scanf("%d" ,&k);
printf("the %d for ASCII char is %c\n",k, k);
while(k>0)
{
    printf("enter a next num:");
    scanf("%d", &k);
    printf("the %d for ASCII char is %c\n",k, k);
}
return 0;
}
