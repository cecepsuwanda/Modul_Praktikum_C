#include <stdio.h>

int main() {
    double nilai, quiz, absen, uts, uas, tugas;
    char Huruf_Mutu;

    quiz  = 40; absen = 100; uts = 60; uas = 50; tugas = 80;
    printf("Absen = %5.2f UTS = %5.2f\n", absen, uts);
    printf("Tugas = %5.2f UAS = %5.2f\n", tugas, uas);
    printf("Quiz = %5.2f\n", quiz);

    nilai = ((0.1 * absen) + (0.2 * tugas) + (0.3 * quiz)
             + (0.4 * uts) + (0.5 * uas)) / 2;

    if      (nilai > 85 && nilai <= 100) Huruf_Mutu = 'A';
    else if (nilai > 70 && nilai <= 85)  Huruf_Mutu = 'B';
    else if (nilai > 55 && nilai <= 70)  Huruf_Mutu = 'C';
    else if (nilai > 40 && nilai <= 55)  Huruf_Mutu = 'D';
    else                                 Huruf_Mutu = 'E';

    printf("Huruf Mutu : %c\n", Huruf_Mutu);
    return 0;
}
