#include <stdio.h>

// Fungsi pertambahan
int add(int a, int b) {
    return a + b;
}

int main() {
    int x = 7, y = 3;
    printf("Hasil %d + %d = %d\n", x, y, add(x, y));
    return 0;
}
