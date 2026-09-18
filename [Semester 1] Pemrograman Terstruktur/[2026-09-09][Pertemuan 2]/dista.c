#include <stdio.h>
int main(){
    float panjang, lebar, tinggiprism, volum;

    printf("masukan panjang alas: ");
    scanf("%f", &panjang);

    printf("masukan lebar alas: ");
    scanf("%f", &lebar);

    printf("masukan tinggi prisma: ");
    scanf("%f", &tinggiprism);

    volum = panjang * lebar * tinggiprism;

    printf("\nhasil = %.2f", volum);

    return 0;
}