#include <stdio.h>

int main()
{
    double konto = 1000000.0;
    int rok = 0;

    for(rok; konto>=0.0; rok++)
    {
        konto *= 1.08;
        konto -= 100000.0;
    }
    printf("Jest rok %d, Jim nie moze juz wyplacic z konta 100000$.\n", rok);
    return 0;
}
