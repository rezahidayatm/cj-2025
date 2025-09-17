#include <stdio.h>

int hitung_luas(int panjang, int lebar) {
    return panjang * lebar;
}

int hitung_keliling(int panjang, int lebar) {
    return 2 * (panjang + lebar);
}

int main(void) {
    int panjang, 
        lebar, 
        luas, 
        keliling;
    printf("\n== Kalkulator Luas & Keliling Persegi Panjang ==\n\n");
    printf("Masukkan panjang: ");
    scanf("%d", &panjang);
    printf("Masukkan Lebar: ");
    scanf("%d", &lebar);

    luas = hitung_luas(panjang, lebar);
    keliling = hitung_keliling(panjang, lebar);

    printf("\nJika Persegi panjang memiliki lebar: %d dan panjang: %d. Maka:\n");
    printf("Luas = %d\n", luas);
    printf("Keliling = %d\n\n", keliling);

    return 0;
}
