#include <stdio.h>

int main(void) {
    int input_angka;

    printf("%s", "Masukkan tiga input angka: ");
    scanf("%d", &input_angka);

    int angka_pertama, angka_kedua, angka_ketiga;
    angka_pertama = input_angka / 100 ;
    angka_kedua = input_angka / 10 % 10;
    angka_ketiga = input_angka / 1 % 10;

    printf("%s angka pertama = %d angka kedua = %d angka ketiga = %d.\n", 
            "Berdasarkan angka yang anda masukkan. Maka:", 
            angka_pertama, 
            angka_kedua,
            angka_ketiga);
            
    return 0;
}
