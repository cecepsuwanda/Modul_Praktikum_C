#include <stdio.h>

int main() {
    int i = 2345;
    printf("Bilangan : %d\n", i);
    printf("Dibalik  : ");
    while (i != 0) {
        printf("%d", i % 10);
        i = i / 10;
    }
    printf("\n");
    return 0;
}
