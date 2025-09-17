#include <stdio.h>

int main(void) {
    float nilai_konversi = 15500.0,
          input_dolar_usd,
          hasil_konversi;
    
    printf("== Konversi Mata Uang USD ke IDR ==\n");
    printf("Masukkan nilai mata uang USD: ");
    scanf("%f", &input_dolar_usd);

    printf("Mengkonversi ...\n\n");
    hasil_konversi = input_dolar_usd * nilai_konversi;

    printf("$%.2f setara dengan Rp %.2f\n", input_dolar_usd, hasil_konversi);

    return 0;
}
