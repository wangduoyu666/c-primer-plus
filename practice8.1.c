# include <stdio.h>
# include <stdlib.h>
int main(void)
{
    int ch;
    int count;
    FILE *fp;
    char fname[50];
    printf("enter the name of the file:");
    scanf("%s", fname);
    fp= fopen(fname, "r");
    if (fp==NULL)
    {
        printf("Failed to open file. bye\n");
        exit(1);
    }
    while((ch = getchar()) != EOF)
         count++;
    printf("there are %d character!", count);
    fclose(fp);
    return 0;
}

