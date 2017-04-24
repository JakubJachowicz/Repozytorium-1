#include <stdio.h>

float wynik(float, float);

int main()
{
    float f1, f2;

    printf("Podaj dwie liczby zmiennoprzecinkowe: ");
    while(scanf("%f %f", &f1, &f2) == 2)
    {
        printf("Stosunek roznicy tych liczb do ich iloczynu wynosi: %f", wynik(f1, f2));
    }
    printf("Koniec!\n");
    return 0;
}

float wynik ( float m, float n)
{
    return (m-n)/(m*n);
}
