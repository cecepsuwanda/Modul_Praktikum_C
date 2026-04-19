#include <stdio.h>

int main() {
    char   Nama[100];
    char   Gol;
    int    JmlAnak;
    double Upahkotor, Upahbersih, PersenTunjangan;

    printf("Nama        : "); scanf(" %[^\n]", Nama);
    printf("Gol (A - D) : "); scanf(" %c", &Gol);
    printf("Jumlah Anak : "); scanf(" %d", &JmlAnak);

    switch (Gol) {
        case 'A': Upahkotor = 1000000; break;
        case 'B': Upahkotor =  800000; break;
        case 'C': Upahkotor =  600000; break;
        case 'D': Upahkotor =  400000; break;
        default : Upahkotor = 0;
    }

    if (JmlAnak > 2)
        PersenTunjangan = 0.3;
    else
        PersenTunjangan = 0.2;

    Upahbersih = Upahkotor - (Upahkotor * PersenTunjangan);
    printf("Upah        : %.2f\n", Upahbersih);
    return 0;
}
