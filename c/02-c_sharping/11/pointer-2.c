#include <stdio.h>

void urutkan_angka(int *a, int *b, int *c) {
    int temp = 0;
    if (*a > *b) {
        
    }
}

int main(void) {
    int x = 50,
        y = 20,
        z = 30;
    printf("Sebelum: x = %d, y = %d, z = %d\n", x, y, z);
    urutkan_angka(&x, &y, &z);
    printf("Sesudah: x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
