#include <stdio.h>

int main(void) {
    char kata1[] = "Pemrograman";
    char kata2[] = "C";

    printf("Belajar %s %s menyenangkan!\n", kata1, kata2);
    printf("Memori dari kata \"%s\" adalah: %zu byte.\n", kata1, sizeof(kata1));
    printf("Memori dari kata \"%s\" adalah: %zu byte.\n", kata2, sizeof(kata2));
}
