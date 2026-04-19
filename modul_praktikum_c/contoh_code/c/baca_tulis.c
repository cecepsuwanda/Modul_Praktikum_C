#include <stdio.h>

int main() {
    int    i;
    double j;
    char   kar;
    char   NString[100];

    printf("Contoh membaca dan menulis\n");
    printf("Masukkan nilai integer  : "); scanf("%d", &i);
    printf("Masukkan nilai real     : "); scanf("%lf", &j);
    /* bersihkan newline sebelum membaca char */
    while (getchar() != '\n');
    printf("Masukkan nilai karakter : "); scanf("%c", &kar);
    while (getchar() != '\n');
    printf("Masukkan nilai string   : "); scanf("%[^\n]", NString);

    printf("Nilai integer yang dibaca  =%d\n", i);
    printf("Nilai real yang dibaca     =%.2f\n", j);
    printf("Nilai karakter yang dibaca =%c\n", kar);
    printf("Nilai string yang dibaca   =%s\n", NString);
    return 0;
}
