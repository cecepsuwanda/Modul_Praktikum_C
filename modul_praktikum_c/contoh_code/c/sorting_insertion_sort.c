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
    int i, j, key;
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

    // Insertion Sort
    for (i = 1; i < JUMLAH_DATA; i++) {

        key = data[i];
        j = i - 1;

        printf("=== Iterasi %d ===\n", i);
        printf("Key = %d\n", key);

        while (j >= 0 && data[j] > key) {

            printf("Geser %d ke kanan\n", data[j]);

            data[j + 1] = data[j];
            j--;

            printf("Langkah %2d : ", langkah++);
            tampilArray(data);
        }

        data[j + 1] = key;

        printf("Sisipkan %d pada posisi %d\n", key, j + 1);
        printf("Hasil Iterasi %d:\n", i);
        tampilArray(data);
        printf("\n");
    }

    printf("========================================\n");
    printf("Data Setelah Diurutkan:\n");
    tampilArray(data);

    return 0;
}