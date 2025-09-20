#include <stdio.h>

int main(void) {
    float data[5];
    float total;
    float rata_rata;

    for (int i = 0; i < 5; i++) {
        printf("Masukkan data ke-%d: ", i + 1);
        scanf("%f", &data[i]);
    }

    printf("Data yang anda masukkan adalah:\n");
    for (int i = 0; i < 5; i++) {
        printf("%.2f ", data[i]);
    }
    printf("\n");

    for (int i = 0; i < 5; i++) {
        total += data[i];
    }

    rata_rata = total / 5.0;

    printf("Total nilai : %.2f\n", total);
    printf("Rata-Rata   : %.2f\n", rata_rata);

    return 0;
}
