#include <stdio.h>

float foton;

void main(){
    printf("Masukkan Nilai Energi Foton : ");
    scanf("%f", &foton);

    if(foton > 3.26){
        printf("Kelebihan");
    }
    else if(foton >= 2.75){
        printf("Warna Ungu");
    }
    else if(foton >= 2.50){
        printf("Warna Biru");
    }
    else if(foton >= 2.17){
        printf("Warna Hijau");
    }
    else if(foton >= 2.10){
        printf("Warna Kuning");
    }
    else if(foton >= 2.00){
        printf("Warna Jingga");
    }
    else if(foton >= 1.62){
        printf("Warna Merah");
    }
    else{
        printf("Hasil tidak ada");
    }
}