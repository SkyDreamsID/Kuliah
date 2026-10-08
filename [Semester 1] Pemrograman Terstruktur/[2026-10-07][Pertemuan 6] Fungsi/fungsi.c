#include <stdio.h>

int A, B, Hasil;

void factorial(int bilangan){
    int i;
    for(i=1; i <= bilangan; i++){
        Hasil = Hasil * i;
    }
}

void main(){
    printf("Masukkan angka yang akan di faktorialkan = ");
    scanf("%d", &A);
    Hasil = 1;
    factorial(A);
    printf("Hasil %d! = %d\n", A, Hasil);

    printf("Masukkan angka yang akan di faktorialkan = ");
    scanf("%d", &B);
    Hasil = 1;
    factorial(B);
    printf("Hasil %d! = %d\n", B, Hasil);

}