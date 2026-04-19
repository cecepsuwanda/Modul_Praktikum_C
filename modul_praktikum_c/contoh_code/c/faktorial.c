#include <stdio.h>
#include <math.h>

double fakt(long n) {
    if (n == 0)
        return 1;
    else
        return n * fakt(n - 1);
}

int main() {
    long n;
    printf("Masukkan n : "); scanf("%ld", &n);
    printf("%ld! = %.0f\n", n, fakt(n));
    return 0;
}
