#include <stdio.h>

int main()
{
    int pierwsza, ostatnia, zakres;
    int i, j;


    printf("Podaj pierwsza liczbe calkowita: ");
    scanf("%d", &pierwsza);
    printf("Teraz podaj ostatnia liczbe calkowita: ");
    scanf("%d", &ostatnia);
    zakres = ostatnia - pierwsza +1;
    int tablica[zakres][3];
    printf("\nn    n^2  n^3\n");
    for (i = 0; i<zakres; i++)
    {
        tablica[i][0] = pierwsza;
        tablica[i][1] = pierwsza*pierwsza;
        tablica[i][2] = pierwsza*pierwsza*pierwsza;
        pierwsza++;
    }
    for (i=0; i<zakres; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%-4d ", tablica[i][j]);
        }
        printf("\n");
    }
    return 0;
}
