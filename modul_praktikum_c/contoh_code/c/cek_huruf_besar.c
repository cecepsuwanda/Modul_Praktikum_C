#include <stdio.h>
#include <ctype.h>

int main() {
    char A;
    printf("Masukkan Suatu Karakter :");
    A = getchar();
    printf("\n");
    if (A >= 'A' && A <= 'Z') {
        printf("Anda menekan huruf besar\n");
        printf("Huruf yang anda tekan, Huruf %c\n", A);
    } else {
        printf("Anda tidak menekan huruf besar\n");
        printf("Karakter yang anda tekan, Karakter %c\n", A);
    }
    return 0;
}
