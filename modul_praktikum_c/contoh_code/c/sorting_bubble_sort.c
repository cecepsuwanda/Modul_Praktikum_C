#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define JUMLAH_DATA 30

// Menampilkan isi array
void tampilArray(int data[]) {
    int i;

    for (i = 0; i < JUMLAH_DATA; i++) {
        printf("%3d ", data[i]);
    }
    printf("\n");
}

int main() {
    int data[JUMLAH_DATA];
    int i, j, temp;
    int langkah = 1;

    // Inisialisasi random
    srand(time(NULL));

    // Generate data acak (0 - 99)
    for (i = 0; i < JUMLAH_DATA; i++) {
        data[i] = rand() % 100;
    }

    printf("Data Awal:\n");
    tampilArray(data);
    printf("\n");

    // Bubble Sort
    for (i = 0; i < JUMLAH_DATA - 1; i++) {

        printf("=== Pass %d ===\n", i + 1);

        for (j = 0; j < JUMLAH_DATA - i - 1; j++) {

            printf("Bandingkan %d dan %d",
                   data[j], data[j + 1]);

            if (data[j] > data[j + 1]) {

                // Tukar data
                temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;

                printf(" --> Ditukar\n");

                printf("Langkah %2d : ", langkah++);
                tampilArray(data);
            }
            else {
                printf(" --> Tidak ditukar\n");
            }
        }

        printf("Hasil setelah Pass %d:\n", i + 1);
        tampilArray(data);
        printf("\n");
    }

    printf("========================================\n");
    printf("Data Setelah Diurutkan:\n");
    tampilArray(data);

    return 0;
}