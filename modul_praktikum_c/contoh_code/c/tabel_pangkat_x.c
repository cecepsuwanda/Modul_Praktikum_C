#include <stdio.h>

int main() {
    int x, i, pangkat, hasilpangkat;

    printf("  x      1/x        x^2      x^3\n");
    printf("-----------------------------------\n");
    x = 1;
    while (x <= 10) {
        printf("%3d %8.5f", x, 1.0 / x);
        pangkat = 2;
        while (pangkat <= 3) {
            hasilpangkat = 1;
            for (i = 1; i <= pangkat; i++)
                hasilpangkat = hasilpangkat * x;
            printf("%8d", hasilpangkat);
            pangkat = pangkat + 1;
        }
        printf("\n");
        x = x + 1;
    }
    return 0;
}
