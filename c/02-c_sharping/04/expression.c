#include <stdio.h>

int main(void ) {
    int input_detik,
        detik = 60,
        detik_per_menit = 60,
        detik_per_jam   = 60 * detik_per_menit;

    printf("Masukkan input detik: ");
    scanf("%d", &input_detik);

    printf("%d detik sama dengan %d jam, %d menit, dan %d detik.\n",
            input_detik,
            input_detik / detik_per_jam,
            input_detik / detik_per_menit % detik,
            input_detik % detik);

    return 0;
}
