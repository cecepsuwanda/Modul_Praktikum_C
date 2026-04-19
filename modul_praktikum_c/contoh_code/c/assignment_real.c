#include <stdio.h>

int main() {
    double i, b, c;
    i = 3.0;
    b = 2.0;
    c = 0.0;
    i = i + i;
    b = b + i;
    c = c * i;
    printf("Nilai i=%.2f b=%.2f c=%.2f\n", i, b, c);
    return 0;
}
