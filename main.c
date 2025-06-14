#include <stdio.h>
#include "add.h"
#include "sub.h"

int main() {
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
            default:
                printf("Pilihan tidak valid.\n");
        }
    }
    return 0;
}