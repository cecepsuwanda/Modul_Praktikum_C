#include <stdio.h>

/* Definisi tipe struct pegawai */
typedef struct {
    char Nama[21];
    char Gol;
    int  JmlAnak;
} TPegawai;

typedef TPegawai TDafPeg[5];

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
    TDafPeg daf_pegawai;
    int i;
    for (i = 0; i < 5; i++) {
        printf("Data ke %d:\n", i + 1);
        input(&daf_pegawai[i]);
    }
    for (i = 0; i < 5; i++) {
        printf("Data ke %d:\n", i + 1);
        cetak(daf_pegawai[i]);
        printf("Tekan Enter untuk melanjutkan...\n");
        getchar(); getchar();
    }
    return 0;
}
