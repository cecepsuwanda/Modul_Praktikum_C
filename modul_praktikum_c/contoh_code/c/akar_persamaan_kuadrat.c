#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D, x1, x2;

    printf("    Mencari Akar Persamaan Kuadrat     \n");
    printf("      Persamaan Umum : ax^2+bx+c       \n");
    printf("\n");
    printf("a = "); scanf("%lf", &a);
    printf("b = "); scanf("%lf", &b);
    printf("c = "); scanf("%lf", &c);
    printf("\n");

    D = (b * b) - (4 * a * c);
    printf("Nilai Diskriminan : %.2f\n", D);
    printf("Jenis Akar : ");

    if (D == 0) {
        x1 = (-b) / (2 * a);
        printf("Kembar\n");
        printf("x1=x2=%10.2f\n", x1);
    } else if (D > 0) {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        printf("Berlainan\n");
        printf("x1 = %10.2f\n", x1);
        printf("x2 = %10.2f\n", x2);
    } else {
        x1 = (-b) / (2 * a);
        x2 = sqrt(-D) / (2 * a);
        printf("2 akar imajiner berlainan\n");
        printf("x1 = %5.2f+%5.2fi\n", x1, x2);
        printf("x2 = %5.2f-%5.2fi\n", x1, x2);
    }
    return 0;
}
