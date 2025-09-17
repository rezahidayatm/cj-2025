#include <stdio.h>

int main(void) {
    printf("Ukuran int = %zu byte.\n",
            sizeof(int));
    printf("Ukuran short int = %zu byte.\n",
            sizeof(short));
    printf("Ukuran long = %zu byte.\n",
            sizeof(long));
    printf("Ukuran unsigned = %zu byte.\n",
            sizeof(unsigned));
    printf("Ukuran char = %zu byte.\n",
            sizeof(char));
    printf("Ukuran float = %zu byte.\n",
            sizeof(float));
    printf("Ukuran double = %zu byte.\n",
            sizeof(double));
    printf("Ukuran long double = %zu byte.\n",
            sizeof(long double));

    return 0;
}
