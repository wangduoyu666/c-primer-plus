#include<stdio.h>
#define SIZE 8
int main(void)
{
	int a[SIZE];
	int i;
	int j = 2;
	for (i = 0; i < SIZE; i++)
	{
		a[i] = j;
		j *= 2;
	}
	i = 0;
	do {
		printf("%d ", a[i]);
		i++;
	}
	while (i < SIZE);

	return 0;
}
