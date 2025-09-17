#include <stdio.h>

int jumlah_array(int *arr, int n) {
    int total = 0;
    
    for (int i = 0; i < n; i++) {
        total += *(arr + i);
    }

    return total;
}

int main(void) {
    int data[] = {10, 20, 30, 40, 50};
    int ukuran = sizeof(data) / sizeof(data[0]);
    int total_nilai;

    total_nilai = jumlah_array(data, ukuran);
    printf("Total nilai dalam array: %d\n", total_nilai);
    
    return 0;
}
