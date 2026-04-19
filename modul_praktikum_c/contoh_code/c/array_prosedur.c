#include <stdio.h>

#define N 3

void isi(int nilai[N]) {
    int i = 0;
    while (i < N) {
        printf("Nilai ke %d = ", i + 1); scanf("%d", &nilai[i]);
        i = i + 1;
    }
}

void cetak(int nilai[N]) {
    int i;
    for (i = 0; i < N; i++)
        printf("Nilai ke %d = %d\n", i + 1, nilai[i]);
}

int main() {
    int nilai[N];
    int n; /* data yang dicari - tidak dipakai di sini */
    (void)n;
    printf("Mengisi elemen array\n");
    isi(nilai);
    printf("Mencetak elemen array\n");
    cetak(nilai);
    return 0;
}
