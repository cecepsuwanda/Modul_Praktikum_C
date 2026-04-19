#include <stdio.h>

int main() {
    int N, i;
    printf("Masukan angka : "); scanf("%d", &N);
    for (i = N; i >= 1; i--)
        printf("%d, ", i);
    printf("0\n");
    return 0;
}
