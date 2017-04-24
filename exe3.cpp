#include <stdio.h>

int main()
{
    char i = 'F';
    char j;


    for(i;i>='A';i--)
    {
        for(j='F';j>=i;j--)
        {
            printf("%c", j);
        }
        printf("\n");
    }
    return 0;
}
