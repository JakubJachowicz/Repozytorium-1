#include <stdio.h>

int main()
{
    int tablica[8];
    int i;


    tablica[0] = 2;
    for(i=1;i<8;i++)
    {
        tablica[i] = 2*tablica[i-1];
    }
    i=0;
    do
    {
        printf("%d ", tablica[i]);
        i++;
    }while(i<=7);
    printf("\n");
    return 0;
}
