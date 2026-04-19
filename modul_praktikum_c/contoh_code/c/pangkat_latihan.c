#include <stdio.h>

/* Latihan: Lengkapi fungsi fpangkat di bawah ini */
double fpangkat(double dipangkatkan, int pangkat) {
    /* variabelnya anda tentukan sendiri */
    double hasilpangkat;
    int i;
    /* pahami program pangkat_for.c dan kemudian lengkapi bagian ini */
    hasilpangkat = 1;
    for (i = 1; i <= pangkat; i++)
        hasilpangkat = hasilpangkat * dipangkatkan;
    return hasilpangkat;
}

int main() {
    /* lengkapi bagian ini */
    double dipangkatkan;
    int    pangkat;
    printf("Bilangan yang akan dipangkatkan : ");
    scanf("%lf", &dipangkatkan);
    printf("Masukkan pangkatnya : ");
    scanf("%d", &pangkat);
    printf("%.2f^%d : %.2f\n", dipangkatkan, pangkat,
           fpangkat(dipangkatkan, pangkat));
    return 0;
}
