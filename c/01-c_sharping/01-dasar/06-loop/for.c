#include <stdio.h>

int main(void) {
   int input_angka;
   printf("\n== Tabel Perkalian ==\n");
   printf("Masukkan sebuah angka: ");
   scanf("%d", &input_angka);
   for (int i = 1; i <= 10; i++) {
       printf("%d x %-2d = %d\n",
               input_angka,
               i,
               input_angka * i);
   }
}
