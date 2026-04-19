#include <stdio.h>

int main() {
    int    JumlahAnak;
    double GajiKotor, Tunjangan, PersenTunjangan, PersenPotongan, Potongan;

    PersenTunjangan = 0.2;
    PersenPotongan  = 0.05;
    printf("Gaji Kotor ?"); scanf("%lf", &GajiKotor);
    printf("Jumlah Anak ?"); scanf("%d", &JumlahAnak);
    if (JumlahAnak > 2) {
        PersenTunjangan = 0.3;
        PersenPotongan  = 0.07;
    }
    Tunjangan = PersenTunjangan * GajiKotor;
    Potongan  = PersenPotongan  * GajiKotor;
    printf("Besar Tunjangan = Rp %10.2f\n", Tunjangan);
    printf("Besar Potongan  = Rp %10.2f\n", Potongan);
    return 0;
}
