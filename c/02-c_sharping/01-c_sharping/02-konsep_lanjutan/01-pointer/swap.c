#include <stdio.h>

int tukar(int *p_a, int *p_b) {

    int temp_a = *p_a;
    int temp_b = *p_b;

    *p_a = temp_b;
    *p_b = temp_a;

    return 1;
}

int main(void) {
    int x, y;

    x = 10;
    y = 15;

    int *p_x, *p_y;

    p_x = &x;
    p_y = &y;

    printf("\nint x sebelum ditukar: %d\n", *p_x);
    printf("int y sebelum ditukar: %d\n\n", *p_y);

    
    tukar(p_x, p_y);


    printf("int x setelah ditukar: %d\n", *p_x);
    printf("int y setelah ditukar: %d\n\n", *p_y);

    printf("%p\n", p_x);
    printf("%p\n", p_y);

    return 0;
}
