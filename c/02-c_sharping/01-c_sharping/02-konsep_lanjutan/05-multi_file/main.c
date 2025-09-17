#include "kalkulator.h"

int main(void) {
    int a, b;

    printf("\n== Kalkulator ==\n\n");
    printf("Masukkan angka pertama: ");
    scanf("%d", &a);
    
    printf("Masukkan angka kedua: ");
    scanf("%d", &b);
    
    printf("==========================\n");
    printf("Hasil dari %d dan %d\n", a, b);
    printf("%d + %d = %d\n", a, b, tambah(a, b));
    printf("%d - %d = %d\n", a, b, kurang(a, b));
    printf("%d * %d = %d\n", a, b, kali(a, b));
    printf("%d / %d = %.2f\n", a, b, bagi(a, b));
    printf("%d %% %d = %d\n\n", a, b, modulo(a, b));

    return 0;
}
