#include <stdio.h>

int skor = 0;

void tambah_skor_permanen(int poin_tambahan);
void hitung_bonus_sementara(void);

int main(void) {
    printf("Skor awal: %d\n", skor);
    printf("Menambah skor permanen...\n");
    tambah_skor_permanen(100);

    {
        printf("-- Menghitung Bonus Sementara --\n");
        hitung_bonus_sementara();
    }
    
    printf("-- Kembali Ke Main --");
    printf("Skor akhir di main adalah: %d\n", skor);

    return 0;
}

void tambah_skor_permanen(int poin_tambahan) {
    skor += poin_tambahan;
}

void hitung_bonus_sementara(void) {
    int skor = 500;
    printf("Di dalam fungsi bonus, skor sementara adalah %d\n", skor);
}
