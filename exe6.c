#include <stdio.h>
#include <string.h>

int main()
{
    char wyraz[40];
    int i;


    printf("Podaj dowolny wyraz:\n");
    scanf("%s", wyraz);
    i = strlen(wyraz)-1;
    for (i;i>=0;i--)
    {
        printf("%c", wyraz[i]);
    }
    printf("\n");
    return 0;
}
