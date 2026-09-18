#include <stdio.h>

int bil;

void main(){
    printf("Masukan bilangan anda : ");
    scanf("%d", &bil);

    if(bil % 2 == 0){
        printf("Bilangan ini genap");
    }
    else{
        printf("Bilangan ini ganjil");
    }
}