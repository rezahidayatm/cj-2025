// == file: calc.h ==

#ifndef CALC_H
#define CALC_H

int tambah(int a, int b);
int kurang(int a, int b);
int kali(int a, int b);
float bagi(int a, int b);
int modulo(int a, int b);

#endif // CALC_H

// == file: calc.c ==

#include "calc.h"

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

float bagi(int a, int b) {
    return (float) a / b;
}

int modulo(int a, int b) {
    return a % b;
}

// == file: main.c ==

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
