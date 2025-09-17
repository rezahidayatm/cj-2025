#include <stdio.h>

int main(void) {
    int umur;
    char inisial;

    printf("Masukkan inisial nama anda.\n");
    scanf(" %c", &inisial);
    printf("Masukkan umur anda.\n");
    scanf("%d", &umur);

    printf("Inisial anda adalah %c. dan umur anda adalah %d tahun.\n", inisial, umur);
}
