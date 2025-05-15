#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int x, y, hasil;

    printf("Masukin dua angka yang mau dijumlahin: ");
    scanf("%d %d", &x, &y);

    hasil = add(x, y);

    printf("Hasil penjumlahan: %d\n", hasil);

    return 0;
}
