#include <stdio.h>

int main(void) {
    int umur, umur_minimal;
    umur_minimal = 18;
    printf("Masukkan umur anda: ");
    scanf("%d", &umur);
    if (umur > umur_minimal) {
        printf("Umur anda adalah: %d.\n", umur);
        printf("Selamat datang. Anda boleh untuk masuk.\n");
    } else if (umur == umur_minimal) {
        printf("Umur anda adalah: %d.\n", umur);
        printf("Selamat datang. Selamat menikmati malam pertama anda.\n");
    } else {
        printf("Umur anda adalah: %d.\n", umur);
        printf("Maaf. Umur anda masih terlalu muda.\n");
    }

    return 0;
}
