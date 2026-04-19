#include <stdio.h>

int main() {
    int N, i, j;
    printf("Masukan jumlah awal bintang : "); scanf("%d", &N);
    for (i = N; i >= 0; i--) {
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    return 0;
}
