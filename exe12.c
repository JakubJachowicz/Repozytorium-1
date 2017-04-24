#include <stdio.h>
#include <string.h>

int main()
{
    char wiersz[60];
    int i = 0;
    char ch;

    printf("Podawaj znaki; znak '\\n' konczy wprowadzanie:\n");
    while ((ch = getchar()) != '\n' && i<60)
    {
        wiersz[i] = ch;
        i++;
    }
    for(i=strlen(wiersz)-1;i>=0;i--)
    {
        printf("%c", wiersz[i]);
    }
    printf("\n");
    return 0;
}
