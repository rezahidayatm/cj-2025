#include <stdio.h>

int main(void) {
    int i;
    int valid;
    do {
        printf("Masukkan angka dari 1 - 10: ");
        scanf("%d", &i);
        if (i > 10) {
            printf("Anda memasukkan angka lebih besar dari 10\n");
        } else if (i < 1) {
            printf("Anda memasukkan angka lebih kecil dari 1\n");
        } else {
            valid = 1;
        }
    } while (valid != 1);

    printf("Terima Kasih. Anda memasukkan angka %d\n", i);
    
    return 0;
}
