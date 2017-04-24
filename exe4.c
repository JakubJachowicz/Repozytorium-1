#include <stdio.h>

int main()
{
    char ch, i, j;
    int spacje, znaki;


    printf("Podaj dowolna wielka litere: ");
    scanf("%c", &ch);
    spacje = ch - 'A';
    znaki = 1;
    for (i = 'A'; i<=ch;i++)
    {
        for(j=0;j<spacje;j++)
        {
            printf(" ");
        }
        for(j='A';j<i+1;j++)
        {
            printf("%c", j);
        }
        for(j=i-1;j>'A'-1;j--)
        {
            printf("%c", j);
        }
        printf("\n");
        spacje--;
    }
    return 0;
}
