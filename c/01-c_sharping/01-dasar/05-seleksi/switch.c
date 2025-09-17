#include <stdio.h>

int main(void) {
    int input; // kopi, teh, coklat_panas;

    // kopi = 1;
    // teh = 2;
    // coklat_panas = 3;

    printf("\n=== Mesin Minuman ===\n");
    printf("1. Kopi\n");
    printf("2. Teh\n");
    printf("3. Coklat Panas");
    printf("\n=====================\n\n");
    
    printf("Pilih minuman anda (1-3), atau masukkan 0 untuk keluar: ");
    if(scanf("%d", &input) == 1) {
        switch (input) {
            case 1: // kopi:
                printf("Anda memilih kopi. Harga: Rp 5000\n");
                break;
            case 2: // teh:
                printf("Anda memilih teh. Harga: Rp 4000\n");
                break;
            case 3: // coklat_panas:
                printf("Anda memilih coklat panas. Harga: Rp 6000\n");
                break;
            case 0:
                printf("Terima kasih.\n");
                return 0;
            default:
                printf("Pilihan tidak tersedia.\n");
                break;
        }
    } else {
        printf("Pilihan harus berupa angka.\n");
    }

    return 0;
}
