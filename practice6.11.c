#include<stdio.h>
#define index 8
int main(void)
{
	int num[index];
	int i;
	printf("请输入8个整数：");
	for (i = 0; i < index; i++)
		scanf("%d", &num[i]);

	//int k;
	for (i=i-1; i >= 0; i--)
		printf("%d\n", num[i]);

	return 0;

}

