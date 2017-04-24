#include <stdio.h>

const int ArSize = 26;

int main()
{
    char tablica[ArSize];
    int i;
    char ch;


    printf("Podaj 26 znakow:\n");
    for (i=0;i<ArSize;i++)
    {
        scanf("%c", &ch);
        tablica[i] = ch;
    }
    printf("Te znaki to:\n");
    for(i=0;i<ArSize;i++)
    {
        printf("%c ", tablica[i]);
    }
    return 0;
}
