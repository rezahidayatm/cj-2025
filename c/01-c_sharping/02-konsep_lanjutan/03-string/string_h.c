#include <stdio.h>
#include <string.h>

int main(void) {
    char nama_depan[25], 
         nama_belakang[25], 
         nama_lengkap[50];
    
    printf("Masukkan nama depan anda: ");
    scanf("%s", nama_depan);

    printf("Oke %s, sekarang masukkan nama "
           "belakang anda: ", 
            nama_depan);
    scanf("%s", nama_belakang);

    strcpy(nama_lengkap, nama_depan);
    strcat(nama_lengkap, " ");
    strcat(nama_lengkap, nama_belakang);

    printf("Berarti, nama panjang anda adalah: %s\n", 
            nama_lengkap);
    printf("----------------------\n");
    printf("Panjang byte string nama_depan: %zu byte.\n",
            sizeof(nama_depan));
    printf("Panjang string nama_depan: %zu.\n",
            strlen(nama_depan));
    printf("Panjang byte string nama_belakang: %zu byte.\n",
            sizeof(nama_belakang));
    printf("Panjang string nama_belakang: %zu.\n",
            strlen(nama_belakang));
    printf("Panjang byte string nama_lengkap: %zu byte.\n",
            sizeof(nama_lengkap));
    printf("Panjang string nama_lengkap: %zu.\n",
            strlen(nama_lengkap));

    return 0;
}
