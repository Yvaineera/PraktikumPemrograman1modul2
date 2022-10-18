#include <stdio.h>
#include <math.h>

void main (){
    int A, B, C, K, L, P;

    printf("Nilai A = ");
    scanf("%d", &A);
    printf("Nilai B = ");
    scanf("%d", &B);
    printf("\n");

    P = (B * B) - (A * A);
    C = sqrt(P);
    K = A + B + C;
    L = 0.5 * C * A;
    printf("Alas     = %d cm\n", C);
    printf("Tinggi   = %d cm\n", A);
    printf("Keliling = %d cm\n", K);
    printf("Luas     = %d cm^2\n", L);
}