#include <stdio.h>
#include <stdlib.h>//我可不可以用if else？just try it!
int main()
{
    int m;
    printf("input m:");
    scanf("%d", &m);
    for(int i = 0; i < 15; i++)
    {
        printf("%d ", m + i);
    }
    printf("\n");
    return 0;
}
