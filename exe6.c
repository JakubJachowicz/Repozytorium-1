#include <stdio.h>

void szescian(float);

int main()
{
    float liczba;

    printf("Podaj liczbe zmiennoprzecinkowa: ");
    scanf("%f", &liczba);
    szescian(liczba);
    return 0;
}

void szescian(float n)
{
    printf("Liczba %.2f do potegi trzeciej to %.4f\n", n, n*n*n);
}
