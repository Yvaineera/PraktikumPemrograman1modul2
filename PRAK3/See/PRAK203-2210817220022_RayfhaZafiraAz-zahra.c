#include<stdio.h>

void main(){
    float a, b, i, j, x, y, hsl;

    printf("Masukkan Nilai a     : ");
    scanf("%f", &a);
    printf("Masukkan Nilai b     : ");
    scanf("%f", &b);
    printf("Masukkan Nilai i     : ");
    scanf("%f", &i);
    printf("Masukkan Nilai j     : ");
    scanf("%f", &j);
    printf("Masukkan Nilai x     : ");
    scanf("%f", &x);
    printf("Masukkan Nilai y     : ");
    scanf("%f", &y);

    hsl = (a - b) * (i / j) - (x + y);
    printf("Hasil %.3f",hsl);
}