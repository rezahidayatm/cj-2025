#include <stdio.h>

int main(void) {
    int semester, sks;
    double ipk, ukt;
    char kelas, inisial;

    semester = 2;
    sks = 24;
    ipk = 3.75;
    ukt = 1.655;
    kelas = 'A';
    inisial = 'K';

    printf("\n== Halo, %c. Selamat datang di Akademik Online. ==\n\n", inisial);

    printf("= Informasi Mahasiswa =\n");
    printf("Inisial: %c.\n", inisial);
    printf("Kelas Favorit: %c.\n", kelas);
    printf("IPK Saat Ini: %f.\n\n", ipk);

    printf("= Informasi Semester %d =\n", semester);
    printf("Biaya UKT: %f.\n", ukt);
    printf("SKS Tersedia: %d.\n\n", sks);
    
    printf("Anda belum membayar UKT semester %d. Anda belum bisa masuk ke kelas %c.\n", semester, kelas);
    printf("Hubungi administrator untuk informasi lebih lanjut.\n\n");
}
