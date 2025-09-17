#include <stdio.h>

int main(void) {
    int jumlah_buku = 50;
    int *p_jumlah;
    
    p_jumlah = &jumlah_buku;
    
    printf("Nilai jumlah_buku = %d\n", jumlah_buku);
    printf("Alamat jumlah_buku = %p\n", jumlah_buku);
    printf("Alamat &jumlah_buku = %p\n", &jumlah_buku);
    printf("Nilai p_jumlah = %d\n", p_jumlah);
    printf("Alamat p_jumlah = %p\n", p_jumlah);
    printf("Alamat &p_jumlah = %p\n", &p_jumlah);
    printf("Nilai *p_jumlah = %d\n", *p_jumlah);
    printf("Alamat *p_jumlah = %p\n", *p_jumlah);
    printf("Alamat &*p_jumlah = %p\n", &*p_jumlah);
}
