#include <stdio.h>

int cari_maksimal(int data[]);

int main(void) {
    int input_data[5];
    int nilai_terbesar;

    printf("== Cari Maksimal ==\n");

    // Minta input data
    for (int i = 0; i < 5; i++) {
        printf("Masukkan angka ke-%d: ", i + 1);
        scanf("%d", &input_data[i]);
    }
    
    // Cari maksimal
    for (int i = 0; i < 5; i++) {
        nilai_terbesar = cari_maksimal(&input_data[i]);
    }

    // Print hasil
    printf("Antara: ");
    for (int i = 0; i < 5; i++) {
        if (i == 4) {
            printf("dan %d\n", input_data[i]);
        } else {
            printf("%d ", input_data[i]);
        }
    }
    printf("Nilai terbesar adalah: %d\n", nilai_terbesar);

    return 0;
}

int cari_maksimal(int data[]) {
    int temp = 0;
    for (int i = 0; i < 5; i++) {
        if (data[i] > temp) {
            temp = data[i];
        }
    }

    return temp;
}
