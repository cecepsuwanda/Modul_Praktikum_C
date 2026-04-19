#include <stdio.h>

int main() {
    double a, b, c, D;
    printf("Menentukan Jenis Akar Persamaan Kuadrat\n");
    printf("      Persamaan Umum : ax^2+bx+c       \n");
    printf("\n");
    printf("a = "); scanf("%lf", &a);
    printf("b = "); scanf("%lf", &b);
    printf("c = "); scanf("%lf", &c);
    printf("\n");
    D = (b * b) - (4 * a * c);
    printf("Nilai Diskriminan : %.2f\n", D);
    printf("Jenis Akar : ");
    if (D == 0)
        printf("Kembar\n");
    else if (D > 0)
        printf("Berlainan\n");
    else
        printf("imajiner berlainan\n");
    return 0;
}
