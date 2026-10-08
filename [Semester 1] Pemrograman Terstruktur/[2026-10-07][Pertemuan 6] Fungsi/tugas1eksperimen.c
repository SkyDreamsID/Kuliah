#include <stdio.h>

int nilai, pembilang, penyebut;

void fx(int x){
    pembilang = (x * x * x) + (x * x) + (3 * x);
    penyebut = 4;
}

void print(){
    printf("Masukkan nilai x = ");
    scanf("%d", &nilai);
    fx(nilai);
    printf("Hasil f(%d) = %d/%d\n", nilai, pembilang, penyebut);
}

void main(){
    print();
    print();
    print();
}