#include <stdio.h>

int main()
{
    float limit, suma, i;


    printf("Podaj liczbe, dla jakiej program ma sumowac kolejne ulamki 1/n: ");
    scanf("%f", &limit);
    for (i=1.0;i<=limit;i += 1.0)
    {
        suma += 1/i;
    }
    printf("Suma %d wyrazow tego ciagu wynosi: %f.\n", (int)limit, suma);
    return 0;
}
