#include <stdio.h>

void main(){
    float np, nk, hsl;

    printf("Masukkan Nilai Pertama  : ");
    scanf("%f", &np);
    printf("Masukkan Nilai Kedua    : ");
    scanf("%f", &nk);

    hsl = np + nk;
    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"", np, nk, hsl);
}