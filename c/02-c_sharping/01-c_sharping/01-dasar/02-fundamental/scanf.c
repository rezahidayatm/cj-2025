#include <stdio.h>

int main(void) {
    double jumlah_bobot_nilai, jumlah_sks;

    printf("\n== Aplikasi Penghitung IPK ==\n\n");
    printf("Masukkan total bobot nilai anda.\n");
    scanf("%lf", &jumlah_bobot_nilai);
    printf("Masukkan Jumlah SKS Anda.\n");
    scanf("%lf", &jumlah_sks);
    printf("Jika jumlah bobot nilai anda = %f, dan jumlah SKS anda = %f. Maka IPK anda adalah = %f.\n", jumlah_bobot_nilai, jumlah_sks, jumlah_bobot_nilai / jumlah_sks);

    return 0;
}
