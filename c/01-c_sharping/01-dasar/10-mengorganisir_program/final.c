#include <stdio.h>

#define MAX_MAHASISWA 10

int daftar_id[MAX_MAHASISWA];
int daftar_nilai[MAX_MAHASISWA];
int jumlah_mahasiswa_saat_ini = 0;

void tampilkan_menu(void);
void tambah_mahasiswa(void);
void tambah_nilai(void);
void tampilkan_semua_mahasiswa(void);
void hitung_statistik(void);
int  ada_mahasiswa(void);

int main(void) {
    int input;
    int info = 1;
    
    while (1) {
        if (info) {
            printf("\n== Aplikasi Mahasiswa Manager ==\n");
            printf("Aplikasi ini digunakan untuk menambah \n"
                   "data dan menghitung nilai dan rata-rata dari semua \n"
                   "mahasiswa yang dimasukkan nilainya.\n");
            info = 0;
        }

        tampilkan_menu();
        scanf("%d", &input);
        switch (input) {
            case 1:
                tambah_mahasiswa();
                break;
            case 2:
                tambah_nilai();
                break;
            case 3:
                tampilkan_semua_mahasiswa();
                break;
            case 4:
                hitung_statistik();
                break;
            case 5:
                info = 1;
                break;
            case 6:
                printf("Terima Kasih.\n");
                return 0;
            default:
                printf("Input tidak valid.\n");
                break;
        }
    }
}

void tampilkan_menu(void) {
    printf("%s", "\n== Sistem Nilai Mahasiswa ==\n");
    printf("%s", "1. Tambah Data Mahasiswa\n");
    printf("%s", "2. Masukkan Nilai Mahasiswa\n");
    printf("%s", "3. Tampilkan Semua Data\n");
    printf("%s", "4. Hitung Rata-Rata Nilai\n");
    printf("%s", "5. Tampilkan info\n");
    printf("%s", "6. Keluar\n");
    printf("%s", "============================\n");
    printf("%s", "Pilihan Anda: ");
}

void tambah_mahasiswa(void) {
    if (jumlah_mahasiswa_saat_ini >= MAX_MAHASISWA) {
        printf("Mahasiswa melebihi kapasitas.\n");
    } else {
        int total = 0;
        for (int i = jumlah_mahasiswa_saat_ini; i < MAX_MAHASISWA; i++) {
            char konfirmasi;
            printf("Masukkan ID mahasiswa ke-%d / %d: ", i + 1, MAX_MAHASISWA);
            scanf("%d", &daftar_id[i]);
            printf("ID untuk mahasiswa ke-%d: %d\n", i + 1, daftar_id[i]);
            jumlah_mahasiswa_saat_ini++;
            total++;
            if (jumlah_mahasiswa_saat_ini < MAX_MAHASISWA) {
                printf("Tambah lagi? [Y/n] ");
                scanf(" %c", &konfirmasi);
                if (konfirmasi == 'n') {
                    break;
                }

            } else {
                printf("\nMahasiswa sudah penuh.\n");
            }
        }

        printf("Anda menambah %d mahasiswa.\n", total);
        printf("Jumlah mahasiswa saat ini: %d / %d\n", jumlah_mahasiswa_saat_ini, MAX_MAHASISWA);
    }
}

void tambah_nilai(void) {
    if (ada_mahasiswa()) {
        for (int i = 0; i < jumlah_mahasiswa_saat_ini; i++) {
            if (daftar_nilai[i] == 0) {
                printf("Masukkan nilai mahasiswa %d dengan id: %d: ", i + 1, daftar_id[i]);
                scanf("%d", &daftar_nilai[i]);
            }
        }
        printf("Anda telah memasukkan semua nilai.");
    }
}

void tampilkan_semua_mahasiswa(void) {
    if (ada_mahasiswa()) {
        for (int i = 0; i < jumlah_mahasiswa_saat_ini; i++) {
            printf("ID: %-4d => Mahasiswa ke-%d => nilai: %d\n", daftar_id[i], i + 1, daftar_nilai[i]);
        }

        printf("--------------------------\n");
        printf("Total mahasiswa: %d / %d\n", jumlah_mahasiswa_saat_ini, MAX_MAHASISWA);
    }
}

void hitung_statistik(void) {
    if (ada_mahasiswa()) {
        int total_nilai = 0;
        for (int i = 0; i < jumlah_mahasiswa_saat_ini; i++) {
            if (daftar_nilai[i] == 0) {
                printf("Nilai untuk mahasiswa ke-%d "
                       "dengan id %d masih kosong. "
                       "Melanjutkan...\n", i + 1, daftar_id[i]);
            }
            total_nilai += daftar_nilai[i];
        }
        printf("Total nilai dari semua siswa = %d\n", total_nilai);
        printf("Nilai rata-rata = %.2f\n", (double) total_nilai / jumlah_mahasiswa_saat_ini);
    }
}

int ada_mahasiswa(void) {
    if (jumlah_mahasiswa_saat_ini == 0) {
        printf("Belum ada mahasiswa yang ditambahkan.\n");
        return 0;
    }
    return 1;
}