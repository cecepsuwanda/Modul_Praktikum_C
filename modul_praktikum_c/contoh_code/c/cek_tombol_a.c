#include <stdio.h>

int main() {
    char A;
    printf("Masukkan Suatu Karakter :");
    A = getchar();
    printf("\n");
    if (A == 'A')
        printf("Anda menekan A besar\n");
    else
        printf("Anda tidak menekan A besar\n");
    return 0;
}
