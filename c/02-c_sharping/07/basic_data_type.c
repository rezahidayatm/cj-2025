#include <stdio.h>

int main(void) {
    char input_huruf_kapital;
    int selisih_konstan = 32;

    printf("Masukkan sebuah huruf kapital: ");
    scanf(" %s", &input_huruf_kapital);

    printf("%c adalah %d\n", input_huruf_kapital, input_huruf_kapital);
    
    char huruf_kecil = (int) input_huruf_kapital + selisih_konstan;

    printf("Input: %c huruf kecilnya adalah %c.\n", input_huruf_kapital, huruf_kecil);

    return 0;
}
