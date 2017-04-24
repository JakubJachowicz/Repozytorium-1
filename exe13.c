#include <stdio.h>

int main()
{
    double Ewa, Kasia;
    int rok;


    rok = 1;
    Ewa = Kasia = 100.0;

    while(Kasia <= Ewa)
    {
        printf("Rok: %2d  Stan konta Ewy: %4.2f   Stan konta Kasi: %4.2f\n", rok, Ewa, Kasia);
        Ewa += 10.0;
        Kasia *= 1.05;
        rok++;
    }
    return 0;
}
