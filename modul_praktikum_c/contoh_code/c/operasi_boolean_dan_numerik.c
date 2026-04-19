#include <stdio.h>

int main() {
    int    i, j, hsl;
    double x, y;
    int    hsl1;
    double hsl2;

    /* proses boolean - ditampilkan secara manual */
    printf("tabel kebenaran\n");
    printf("-----------------------------------------------------\n");
    printf("|   x1  |   x2  |     x1 and x2     |    x1 or x2  |\n");
    printf("----------------------------------------------------\n");
    printf("| true  | true  |%12s|%8s%10s|%8s\n",
           (1 && 1) ? "true" : "false", "",
           (1 || 1) ? "true" : "false", "");
    printf("| true  | false |%12s|%8s%10s|%8s\n",
           (1 && 0) ? "true" : "false", "",
           (1 || 0) ? "true" : "false", "");
    printf("| false | true  |%12s|%8s%10s|%8s\n",
           (0 && 1) ? "true" : "false", "",
           (0 || 1) ? "true" : "false", "");
    printf("| false | false |%12s|%8s%10s|%8s\n",
           (0 && 0) ? "true" : "false", "",
           (0 || 0) ? "true" : "false", "");
    printf("----------------------------------------------------\n");

    /* proses operasi numerik */
    i = 5; j = 2;
    printf("operasi numerik pada tipe data integer\n");
    printf("---------------------------\n");
    printf("| operasi | hasil operasi |\n");
    printf("---------------------------\n");
    printf("| %d + %d   | %6d        |\n", i, j, i + j);
    printf("| %d - %d   | %6d        |\n", i, j, i - j);
    printf("| %d * %d   | %6d        |\n", i, j, i * j);
    printf("| %d / %d   | %6.2f        |\n", i, j, (double)i / j);
    printf("| %d div %d | %6d        |\n", i, j, i / j);
    printf("| %d mod %d | %6d        |\n", i, j, i % j);
    printf("---------------------------\n");
    printf("Tekan enter untuk meneruskan . . .\n");
    getchar();

    x = 5.0; y = 2.0;
    printf("operasi numerik pada tipe data float\n");
    printf("---------------------------\n");
    printf("| operasi | hasil operasi |\n");
    printf("---------------------------\n");
    printf("| %3.1f + %3.1f   | %6.1f    |\n", x, y, x + y);
    printf("| %3.1f - %3.1f   | %6.1f    |\n", x, y, x - y);
    printf("| %3.1f * %3.1f   | %6.1f    |\n", x, y, x * y);
    printf("| %3.1f / %3.1f   | %6.1f    |\n", x, y, x / y);
    printf("---------------------------\n");

    /* operator relasi numerik */
    printf("5.0 <> 2.0 adalah=%s\n", (x != y) ? "true" : "false");
    printf("5.0 < 2.0 adalah=%s\n",  (x < y)  ? "true" : "false");
    return 0;
}
