#include <stdio.h>

int main(void) {
    int nilai[2][3];
    int total_siswa = sizeof(nilai) / sizeof(nilai[0]);
    int total_ujian = sizeof(nilai) / sizeof(nilai[0][0] / sizeof(nilai[0]));
    int total_nilai = 0;
    double rata_rata;

    for (int i = 0; i < total_siswa; i++) {
        for (int j = 0; j < total_ujian; j++) {
            printf("Masukkan nilai ujian ke-%d untuk siswa ke-%d: ", 
                    j + 1, 
                    i + 1);
            scanf("%d", &nilai[i][j]);
            total_nilai += nilai[i][j];
        }
        rata_rata = (double) total_nilai / total_ujian;
        printf("\nNilai ujian siswa ke-%d:\n", i + 1);
        printf("Total nilai: %d\n", total_nilai);
        printf("Nilai rata-rata: %.2f\n\n", rata_rata);
        total_nilai = 0;
    }

    printf("Anda telah mengisi semua nilai siswa anda.\n");

    return 0;
}
