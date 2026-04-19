#include <stdio.h>

int main() {
    int i;
    int nilai[3];

    printf("Mengisi elemen array\n");
    i = 0;
    while (i < 3) {
        printf("Nilai ke %d = ", i + 1); scanf("%d", &nilai[i]);
        i = i + 1;
    }
    printf("Mencetak elemen array\n");
    for (i = 0; i < 3; i++)
        printf("Nilai ke %d = %d\n", i + 1, nilai[i]);
    return 0;
}
