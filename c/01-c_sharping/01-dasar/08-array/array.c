#include <stdio.h>

int main(void) {
    int nilai[5];
    int total_nilai = 0;
    double rata_rata;

    for (int i = 0; i < 5; i++) {
        printf("Masukkan nilai ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
        total_nilai += nilai[i];
    }

    rata_rata = total_nilai / 5.0;
    printf("Total nilai: %d\n", total_nilai);
    printf("Nilai rata-rata: %.2f\n", rata_rata);

    return 0;
}
