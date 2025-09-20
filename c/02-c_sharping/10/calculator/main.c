#include <stdio.h>
#include "calc.h"

int main(void) {
    int a, b;

    printf("== Kalkulator Sederhana ==\n");

    printf("Masukkan angka pertama: ");
    scanf("%d", &a);

    printf("Masukkan angka kedua: ");
    scanf("%d", &b);

    printf("==========================\n");
    printf("Hasil:\n");
    printf("%d + %d = %d\n", a, b, tambah(a, b));
    printf("%d - %d = %d\n", a, b, kurang(a, b));
    printf("%d x %d = %d\n", a, b, kali(a, b));
    if (b == 0) {
        printf("%d : %d = Error: Pembagian dengan 0\n", a, b);
        printf("%d %% %d = Error: Pembagian dengan 0\n", a, b);
    } else {
        printf("%d : %d = %.2f\n", a, b, bagi(a, b));
        printf("%d %% %d = %d\n", a, b, modulo(a, b));
    }

    return 0;
}
