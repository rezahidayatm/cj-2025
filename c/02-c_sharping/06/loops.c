#include <stdio.h>

int main(void) {
    int input_angka;

    printf("== Tabel Perkalian ==\n");
    printf("Masukkan bilangan bulat: ");
    scanf("%d", &input_angka);

    for (int i = 1; i <= 10; i++) {
        int hasil = input_angka * i;
        printf("%d x %d = %d\n", input_angka, i, hasil);
    }

    return 0;
}
