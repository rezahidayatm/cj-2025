#include "kalkulator.h"

int pembagian_nol(int b) {
    if (b == 0) {
        printf("Tidak bisa membagi nol.\n");
        return 1;
    }
    return 0;
}

int tambah(int a, int b) {
    return a + b;
}

int kurang(int a, int b) {
    return a - b;
}

int kali(int a, int b) {
    return a * b;
}

int modulo(int a, int b) {
    if (!pembagian_nol(b)) {
        return a % b;
    }
    return 0;
}

double bagi(int a, int b) {
    if (!pembagian_nol(b)) {
        return (double) a / b;
    }
    return 0;
}


