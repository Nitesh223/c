#include <stdio.h>
int main()
{
    int n,a[32];
    printf("Enter the number: ");
    scanf("%d", &n);
    int index = 0;
    while (n > 0)
    {
        a[index] = n % 2;
        n /= 2;
        index++;
    }

    // Print the binary number in reverse order
    printf("Binary: ");
    for (int i = index - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}