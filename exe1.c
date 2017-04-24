#include <stdio.h>
#define MIN_W_GODZ   60

int main()
{
    int czas = 0;
    int godziny, minuty;

    while(czas++ < 1439)
    {
        godziny = czas/MIN_W_GODZ;
        minuty = czas%MIN_W_GODZ;
        printf("%d:%d\n", godziny, minuty);
    }
    return 0;
}
