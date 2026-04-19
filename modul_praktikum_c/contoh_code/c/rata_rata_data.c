#include <stdio.h>

int main() {
    int    i, N;  /* counter dan jumlah data */
    double Data = 0, Rata, Total = 0;

    printf("Banyaknya data : "); scanf("%d", &N);
    for (i = 1; i <= N; i++) {
        printf("Data ke %d : ", i); scanf("%lf", &Data);
        Total = Total + Data;
    }
    Rata = Total / N;
    printf("Banyaknya Data       : %d\n", N);
    printf("Total Nilai Data     : %5.2f\n", Total);
    printf("Rata-rata nilai Data : %5.2f\n", Rata);
    return 0;
}
