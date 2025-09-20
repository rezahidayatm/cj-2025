#include <stdio.h>

int cari_maksimal(int data1, int data2);

int main(void) {
    int angka_terbesar,
        input_data1,
        input_data2;

    printf("Masukkan angka pertama: ");
    scanf("%d", &input_data1);

    printf("Masukkan angka kedua: ");
    scanf("%d", &input_data2);

    printf("Mencari angka maksimal...\n");
    angka_terbesar = cari_maksimal(input_data1, input_data2);

    printf("Antara %d dan %d, yang lebih besar adalah %d.\n", input_data1, input_data2, angka_terbesar);

    return 0;
}

int cari_maksimal(int data1, int data2) {
    if (data1 > data2) return data1;
    return data2;
}
