#include <stdio.h>
#define DAYS_PER_WEEK   7

int main()
{
    int dni, tygodnie;


    printf("Podaj dowolna liczbe dni: ");
    scanf("%d", &dni);
    tygodnie = dni/DAYS_PER_WEEK;
    dni = dni%DAYS_PER_WEEK;
    printf("\nTo inaczej %d tygodni i %d dni.\n", tygodnie, dni);
    return 0;
}
