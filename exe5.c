#include <stdio.h>

int main()
{
    int licznik = 0;
    int suma = 0;
    int limit;

    printf("Sume kwadratow ilu liczb naturalnych ma podac program?\n");
    scanf("%d", &limit);
    while(licznik<=limit)
    {
        suma += licznik*licznik;
        licznik++;
    }
    printf("Suma kwadratow %d pierwszych liczb naturalnych to %d.\n", limit, suma);
    return 0;
}

