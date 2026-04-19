#include <stdio.h>

typedef struct {
    char Nama[21];
    char Gol;
    int  JmlAnak;
} TPegawai;

void input(TPegawai *pegawai) {
    printf("Nama        : "); scanf(" %[^\n]", pegawai->Nama);
    printf("Gol (A - D) : "); scanf(" %c", &pegawai->Gol);
    printf("Jumlah Anak : "); scanf(" %d", &pegawai->JmlAnak);
}

double upahkotor(char gol) {
    switch (gol) {
        case 'A': return 1000000;
        case 'B': return  800000;
        case 'C': return  600000;
        case 'D': return  400000;
        default : return 0;
    }
}

double persentunjangan(int jmlanak) {
    if (jmlanak > 2)
        return 0.3;
    else
        return 0.2;
}

void cetak(TPegawai pegawai) {
    double upahbersih;
    printf("Nama        : %s\n", pegawai.Nama);
    printf("Gol (A - D) : %c\n", pegawai.Gol);
    printf("Jumlah Anak : %d\n", pegawai.JmlAnak);
    upahbersih = upahkotor(pegawai.Gol)
               - (upahkotor(pegawai.Gol) * persentunjangan(pegawai.JmlAnak));
    printf("Upah        : %5.2f\n", upahbersih);
}

int main() {
    TPegawai pegawai;
    input(&pegawai);
    cetak(pegawai);
    return 0;
}
