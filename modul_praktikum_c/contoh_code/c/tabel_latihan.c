/* Latihan: Lengkapi fungsi fpangkat dan prosedur cetak di bawah ini */
#include <stdio.h>

double fpangkat(double dipangkatkan, int pangkat) {
    /* variabelnya anda tentukan sendiri */
    double hasil = 1;
    int i;
    /* pahami program tabel_pangkat_x.c dan kemudian lengkapi bagian ini */
    for (i = 1; i <= pangkat; i++)
        hasil = hasil * dipangkatkan;
    return hasil;
}

void cetak(int x) {
    /* variabelnya anda tentukan sendiri */
    int i;
    printf("  x      1/x        x^2      x^3\n");
    printf("-----------------------------------\n");
    /* pahami program tabel_pangkat_x.c dan kemudian lengkapi bagian ini */
    for (i = 1; i <= x; i++) {
        printf("%3d %8.5f %8.0f %8.0f\n",
               i, 1.0 / i,
               fpangkat(i, 2),
               fpangkat(i, 3));
    }
}

int main() {
    /* variabelnya anda tentukan sendiri */
    int x;
    printf("Masukkan banyaknya data : "); scanf("%d", &x);
    cetak(x);
    return 0;
}
