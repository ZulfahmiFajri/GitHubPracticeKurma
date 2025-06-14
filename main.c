#include <stdio.h>

int main() {
    int pilihan;
    
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
    }
    return 0;
}