#include <stdio.h>

int main()
{
    int liczby[8];
    int i;


    printf("Podaj osiem liczb calkowitych:\n");
    for (i=0;i<8;i++)
    {
        scanf("%d", &liczby[i]);
    }
    printf("Te liczby w odwrotnej kolejnosci to:\n");
    for (i=7;i>=0;i--)
    {
        printf("%d ", liczby[i]);
    }
    printf("\n");
    return 0;
}
