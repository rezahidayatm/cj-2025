#include <stdio.h>

void hitung_pangkat(int angka, int *hasil_kuadrat, int *hasil_kubik) {
    *hasil_kuadrat = angka * angka;
    *hasil_kubik = angka * angka * angka;
}

int main(void) {
    int masukan = 5,
        kuadrat = 2, 
        kubik = 3;

    printf("Awal Kuadrat %d dan kubik %d\n", kuadrat, kubik);

    hitung_pangkat(masukan, &kuadrat, &kubik);

    printf("Setelah hitung_pangkat kuadrat %d dan kubik %d\n", kuadrat, kubik);

    return 0;
}
