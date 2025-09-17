#include <stdio.h>

struct Buku {
    char judul[50];
    char pengarang[50];
    int tahun_terbit;
}

int tambah_data(char &judul, 
                char &pengarang, 
                int tahun_terbit);
