#include <stdio.h>

int main()
{
    float f1, f2;


    printf("Podaj dwie liczby zmiennoprzecinkowe: ");
    while(scanf("%f %f", &f1, &f2) == 2)
    {
        printf("Stosunek roznicy tych liczb do ich iloczynu wynosi: %f", (f1-f2)/(f1*f2));
    }
    printf("Koniec!\n");
    return 0;
}
