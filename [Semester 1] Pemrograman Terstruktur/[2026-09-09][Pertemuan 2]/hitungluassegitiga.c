#include <stdio.h>

int a,t;
float luas;

void main(){
    printf("Masukkan Alas: ");
    scanf("%d", &a);
    printf("Masukkan Tinggi: ");
    scanf("%d", &t);
    luas = (float) 1/2 * a * t;
    printf("Luas Segitiga = %.2f", luas);
}