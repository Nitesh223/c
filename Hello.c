#include <stdio.h>
int power(int n, int m);
int main() {
    int base, exponent, ans;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    ans = power(base, exponent);
    printf("%d^%d = %d", base, exponent, ans);
    return 0;
}
int power(int n, int m) {
    if (m != 0) {
        return (n * power(n, m - 1));
    } else {
        return 1;
    }
}