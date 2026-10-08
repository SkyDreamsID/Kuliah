#include <stdio.h>

int n;
float y;

void fungsi(int x){
    y=(float)(x*x*x + x*x + 3*x)/4;
}

void main(){
    printf("Masukkan Nilai x = ");
    scanf("%d", &n);
    fungsi(n);
    printf("Hasil = %f\n",y);
}