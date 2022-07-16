# include <stdio.h>
#define k 256
int main (void)
{
int t;
printf("The program computes moduli.\n");
printf("Enter an integer to serve as the second operand: %d\n",k);
printf("Now enter the first operand:");
scanf("%d", &t);
printf("%d %% %d is %d\n",t, k, t%k);
while(t>0|| t!=0)
{
    printf("Enter next number for first operand(<=0 to quit):");
    scanf("%d",&t);
    printf("%d %% %d is %d\n", t, k, t%k);
}
printf("Done");
return 0;
}
