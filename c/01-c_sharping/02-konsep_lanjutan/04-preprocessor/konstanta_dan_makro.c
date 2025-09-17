#include <stdio.h>

#define NAMA_UNIVERSITAS "Universitas Gajah Mada"
#define KALIKAN(a, b) (a * b)
#define TAMBAHKAN(a, b) ((a) + (b))

int main(void) {
    printf("Saya adalah mahasiswa di %s.\n", NAMA_UNIVERSITAS);
    printf("Hasil dari 5 + 2 kali 10 adalah: %d\n", KALIKAN(5 + 2, 10));
    printf("Hasil dari 5 tambah 2 * 10 adalah: %d\n", TAMBAHKAN(5, 2 * 10));
    
    return 0;
}
