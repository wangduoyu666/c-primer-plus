#include <stdio.h>
int main(void)
{
	int n,m,i;
	long long sum;
    printf("Enter lower and upper integer limits :");
	scanf("%d %d", &n,& m);
	while (n<m)
	{
		sum = 0;
		for (i=n; i <= m; i++)
			sum += i* i;
		printf("The sums of the squares from %d to %d is %lld\n", n,m,sum);
		printf("Enter next set of limits :");
		scanf("%d %d", &n, &m);
	}
	printf("Done");
	return 0;
}
