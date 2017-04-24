#include <stdio.h>

int main()
{
    int ch;

    printf("Podaj dowolna liczbe calkowita: ");
    scanf("%d", &ch);
    printf("Pod kodem %d kryje sie literka %c.\n", ch, ch);
    return 0;
}
