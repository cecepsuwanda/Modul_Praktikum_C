#include <stdio.h>

int main() {
    int    i, pangkat;
    double hasilpangkat, dipangkatkan;

    printf("Bilangan yang akan dipangkatkan : ");
    scanf("%lf", &dipangkatkan);
    printf("Masukkan pangkatnya : ");
    scanf("%d", &pangkat);

    hasilpangkat = 1;
    for (i = 1; i <= pangkat; i++)
        hasilpangkat = hasilpangkat * dipangkatkan;

    printf("%.2f^%d : %.2f\n", dipangkatkan, pangkat, hasilpangkat);
    return 0;
}
