#include <stdio.h>

typedef struct {
    char Nama[21];
    char Gol;
    int  JmlAnak;
} TPegawai;

int main() {
    TPegawai pegawai;
    double Upahkotor, Upahbersih, PersenTunjangan;

    printf("Nama        : "); scanf(" %[^\n]", pegawai.Nama);
    printf("Gol (A - D) : "); scanf(" %c", &pegawai.Gol);
    printf("Jumlah Anak : "); scanf(" %d", &pegawai.JmlAnak);

    switch (pegawai.Gol) {
        case 'A': Upahkotor = 1000000; break;
        case 'B': Upahkotor =  800000; break;
        case 'C': Upahkotor =  600000; break;
        case 'D': Upahkotor =  400000; break;
        default : Upahkotor = 0;
    }

    if (pegawai.JmlAnak > 2)
        PersenTunjangan = 0.3;
    else
        PersenTunjangan = 0.2;

    Upahbersih = Upahkotor - (Upahkotor * PersenTunjangan);
    printf("Upah        : %.2f\n", Upahbersih);
    return 0;
}
