#include <stdio.h>

#define PI 3.14

int main() {
    int    pilih;
    double sisi, jari, tinggi;

    do {
        printf("         <<< Menu >>>        \n");
        printf("\n");
        printf("1. Menghitung Isi Kubus\n");
        printf("2. Menghitung Luas Lingkaran\n");
        printf("3. Menghitung Isi Silinder\n");
        printf("0. Keluar Program\n");
        printf("Pilih Nomor : "); scanf("%d", &pilih);

        switch (pilih) {
            case 1:
                printf("Panjang Sisi Kubus : "); scanf("%lf", &sisi);
                printf("Isi Kubus : %.2f\n", sisi * sisi * sisi);
                break;
            case 2:
                printf("Jari-jari lingkaran : "); scanf("%lf", &jari);
                printf("Luas Lingkaran : %.2f\n", PI * jari * jari);
                break;
            case 3:
                printf("Jari-jari lingkaran : "); scanf("%lf", &jari);
                printf("Tinggi Silinder : "); scanf("%lf", &tinggi);
                printf("Isi Silinder : %.2f\n", PI * jari * jari * tinggi);
                break;
        }
        printf("Tekan Enter untuk melanjutkan...\n");
        while (getchar() != '\n');
    } while (pilih != 0);

    return 0;
}
