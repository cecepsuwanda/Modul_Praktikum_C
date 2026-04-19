#include <stdio.h>

int main() {
    int    JumlahAnak;
    double GajiKotor, Tunjangan, PersenTunjangan;

    PersenTunjangan = 0.2;
    printf("Gaji Kotor ?"); scanf("%lf", &GajiKotor);
    printf("Jumlah Anak ?"); scanf("%d", &JumlahAnak);
    if (JumlahAnak > 2)
        PersenTunjangan = 0.3;
    Tunjangan = PersenTunjangan * GajiKotor;
    printf("Besar Tunjangan = Rp %10.2f\n", Tunjangan);
    return 0;
}
