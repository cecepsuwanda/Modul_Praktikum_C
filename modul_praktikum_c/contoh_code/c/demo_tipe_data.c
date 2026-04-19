/* KAMUS */
#include <stdio.h>

int main() {
    /* ALGORITMA */
    int    i;
    unsigned int   j;
    unsigned char  k;
    double l;
    char   SHello[] = "Hello, dunia";

    SHello[0] = 'H'; /* sudah diinisialisasi */
    i = -1234;
    j = 60000;
    k = 3;
    l = 3.14;

    printf("%s\n", SHello);
    printf("Nilai i (integer)= %5d\n", i);
    printf("Nilai j (word)   = %5u\n", j);
    printf("Nilai k (byte)   = %5u\n", k);
    printf("Nilai l (real)   = %5.2f\n", l);
    return 0;
}
