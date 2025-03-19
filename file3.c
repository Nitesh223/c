#include <stdio.h>
int main()
{
    int i, j, k;
    for (i = 1; i <= 10; i += 2)
    {
        for (k = 10; k >= i; k -= 2)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}