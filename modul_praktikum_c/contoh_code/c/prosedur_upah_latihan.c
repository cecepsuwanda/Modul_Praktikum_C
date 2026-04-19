/* Latihan: Lengkapi prosedur/fungsi di bawah ini */
#include <stdio.h>

/* definisikan sendiri */
void input(char *Nama, char *gol, int *jmlanak) {
    /* definisikan sendiri */
    printf("Nama        : "); scanf(" %[^\n]", Nama);
    printf("Gol (A - D) : "); scanf(" %c", gol);
    printf("Jumlah Anak : "); scanf(" %d", jmlanak);
}

double Upahkotor(char gol) {
    /* definisikan sendiri */
    switch (gol) {
        case 'A': return 1000000;
        case 'B': return  800000;
        case 'C': return  600000;
        case 'D': return  400000;
        default : return 0;
    }
}

double Persentunjangan(int jmlanak) {
    /* definisikan sendiri */
    if (jmlanak > 2)
        return 0.3;
    else
        return 0.2;
}

int main() {
    /* definisikan sendiri */
    char Nama[50], Gol;
    int  jmlanak;
    double Upahbersih;

    input(Nama, &Gol, &jmlanak);
    Upahbersih = Upahkotor(Gol) - (Upahkotor(Gol) * Persentunjangan(jmlanak));
    printf("Upah        : %.2f\n", Upahbersih);
    return 0;
}
