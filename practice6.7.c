#include <stdio.h>//stringºÍcharµÄÇø±ð
int main(void)
{
	int i,j;
	char word[100];
	scanf("%s",&word);
	j = strlen(word);
	for(i=j-1;i>=0;i--)
    {
		printf("%c",word[i]);
	}
	return 0;
}
