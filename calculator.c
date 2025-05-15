#include <stdio.h>

int add(int a, int b) { return a + b; }
int sub(int a, int b) { return a - b; }
int mul(int a, int b) { return a * b; }
float div(int a, int b) {
    if (b == 0) {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0;
    }
    return (float)a / b;
}

int main(){
    int a, b, pilihan;
    
    while (1) {
        printf("\n==== Kalkulator Sederhana ====\n");
        printf("1. Tambah\n");
        printf("2. Kurang\n");
        printf("3. Kali\n");
        printf("4. Bagi\n");
        printf("5. Keluar\n");
        printf("Pilih operasi (1-5): ");
        scanf("%d", &pilihan);

        if (pilihan == 5) {
            printf("Terima kasih telah menggunakan kalkulator.\n");
            break;
        }

        printf("Masukkan dua angka: ");
        scanf("%d %d", &a, &b);

        switch (pilihan) {
            case 1:
                printf("Hasil: %d\n", add(a, b));
                break;
            case 2:
                printf("Hasil: %d\n", sub(a, b));
                break;
            case 3:
                printf("Hasil: %d\n", mul(a, b));
                break;
            case 4:
                printf("Hasil: %.2f\n", div(a, b));
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    }
    return 0;
}
