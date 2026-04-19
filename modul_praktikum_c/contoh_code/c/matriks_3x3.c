#include <stdio.h>

void isi(int matrik[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++) {
            printf("A[%d,%d] = ", i + 1, j + 1);
            scanf("%d", &matrik[i][j]);
        }
}

void cetak(int matrik[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%3d", matrik[i][j]);
        printf("\n");
    }
}

int main() {
    int matrik[3][3];
    printf("Mengisi elemen matrik A\n");
    isi(matrik);
    printf("Mencetak elemen matrik A\n");
    cetak(matrik);
    return 0;
}
