#include <stdio.h>

int main(void) {
    int i;
    printf("\n== Peluncuran Roket ==\n\n");
    printf("Masukkan hitung mundur: ");
    scanf("%d", &i);
    while (i > 0) {
        printf("%d\n", i);
        i--;
    }
    printf("Roket meluncur...\n");
    return 0;
}
