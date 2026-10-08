#include <stdio.h>

int A, B, C, pembilang, penyebut;

void fx(int x){
    pembilang = (x * x * x) + (x * x) + (3 * x);
    penyebut = 4;
}

void main(){
    printf("\nMasukkan nilai x = ");
    scanf("%d", &A);
    fx(A);
    printf("Hasil f(%d) = %d/%d\n", A, pembilang, penyebut);
    printf("\nMasukkan nilai x = ");
    scanf("%d", &B);
    fx(B);
    printf("Hasil f(%d) = %d/%d\n", B, pembilang, penyebut);
    printf("\nMasukkan nilai x = ");
    scanf("%d", &C);
    fx(C);
    printf("Hasil f(%d) = %d/%d\n", C, pembilang, penyebut);
}