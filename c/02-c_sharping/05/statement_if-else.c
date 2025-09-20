#include <stdio.h>

int main(void) {
    int input_angka,
        angka_genap = 2;

    printf("Masukkan bilangan bulat: ");
    scanf("%d", &input_angka);

    if (input_angka % angka_genap == 0) {
        printf("Angka %d adalah bilangan genap.\n", input_angka);
    } else {
        printf("Angka %d adalah bilangan ganjil.\n", input_angka);
    }

    return 0;
}
