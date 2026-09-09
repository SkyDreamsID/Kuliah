#include <stdio.h>

float sisi, tinggi;
float volume;

void main(){
    printf("Masukkan Sisi: ");
    scanf("%f", &sisi);

    printf("Masukkan Tinggi: ");
    scanf("%f", &tinggi);

    volume = (1.0 / 3.0) * (sisi * sisi) * tinggi;
    // volume = ((sisi * sisi) * tinggi) / 3;
    
    printf("Volume Limas = %.2f", volume);

    return 0;
}