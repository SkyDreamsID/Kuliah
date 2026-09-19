#include <stdio.h>

int jam_alpa;

void main(){
    printf("Masukkan Jam Alpa : ");
    scanf("%d", &jam_alpa);

    if(jam_alpa > 55){
        printf("DO");
    }
    else if(jam_alpa >= 47){
        printf("Surat Peringatan 3!");
    }
    else if(jam_alpa >= 36){
        printf("Surat Peringatan 2!");
    }
    else if(jam_alpa >= 18){
        printf("Surat Peringatan 1!");
    }
    else{
        printf("Dibawah 18 Jam tidak ada Sanksi");
    }
}
