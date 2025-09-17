#include <stdio.h>

int main(void) {
    int qty_buku = 2;
    double harga_buku = 55000.50;
    double total_harga_buku = qty_buku * harga_buku;
    int qty_pensil = 5;
    double harga_pensil = 2500.0;
    double total_harga_pensil = qty_pensil * harga_pensil;

    printf("\n|------------------------------------------------------------|\n");
    printf("|   Nama Barang   | qty |   Harga Satuan   |      Total      |");
    printf("\n|-----------------|-----|------------------|-----------------|\n");
    printf("| Buku            | %3d | %-16.2f | %15.2f |\n", qty_buku, harga_buku, total_harga_buku);
    printf("| Pensil          | %3d | %-16.2f | %15.2f |", qty_pensil, harga_pensil, total_harga_pensil);
    printf("\n|------------------------------------------------------------|\n");
    printf("| Harga Bayar            %35.2f |", total_harga_buku + total_harga_pensil);
    printf("\n|------------------------------------------------------------|\n");

    return 0;
}
