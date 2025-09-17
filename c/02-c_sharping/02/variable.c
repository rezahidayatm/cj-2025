#include <stdio.h>

int main(void) {
    int panjang = 10,
        lebar = 5,
        luas;
    
    luas = panjang * lebar;
    
    printf("Luas persegi panjang dengan panjang %d dan lebar %d adalah %d.\n",
            panjang, lebar, luas);

    return 0;
}
