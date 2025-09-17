#include <stdio.h>

int main(void) {
    int level,
        mengalahkan_monster,
        dapat_barang_langka;
    char inisial;
    level = 1;
    mengalahkan_monster = 3;
    dapat_barang_langka = 2;
    printf("Masukkan inisial karakter anda: ");
    scanf(" %c", &inisial);
    printf("Halo %c. Level anda sekarang adalah: %d.\n",
            inisial,
            level);
    level += mengalahkan_monster;
    printf("%c mengalahkan monster. Level naik %d menjadi %d.\n",
            inisial,
            mengalahkan_monster,
            level);
    level *= dapat_barang_langka;
    printf("%c mendapatkan barang langka. Level naik %d kali menjadi %d.\n",
            inisial,
            dapat_barang_langka,
            level);
    level--;
    printf("%c terkena kutukan. Level turun 1 menjadi %d.\n",
            inisial,
            level);
    printf("Setelah menjalani semua, level %c saat ini adalah %d.\n",
            inisial,
            level);

    return 0;
}
