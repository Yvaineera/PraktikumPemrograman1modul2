#include <stdio.h>

void main(){
    float r, t, v, l, k, phi = 3.142857;

    printf("Jari-jari  : ");
    scanf("%f", &r);
    printf("Tinggi     : ");
    scanf("%f", &t);

    v = phi * (r*r) * t;
    printf("Volume  : %.2f\n", v);
    l = 2* phi * r * (r + t);
    printf("Luas    : %.2f\n", l);
    k = 2 * phi * r;
    printf("Kelling : %.2f\n", k);
}