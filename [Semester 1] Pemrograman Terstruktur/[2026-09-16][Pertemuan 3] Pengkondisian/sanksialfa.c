#include <stdio.h>

int jam_alpha;

void main(){
    printf("Masukkan Jam Alpha : ");
    scanf("%d", &jam_alpha);

    if(jam_alpha > 55){
        printf("DO");
    }
    else if(jam_alpha >= 47){
        printf("Surat Peringatan 3!");
    }
    else if(jam_alpha >= 36){
        printf("Surat Peringatan 2!");
    }
    else if(jam_alpha >= 18){
        printf("Surat Peringatan 1!");
    }
    else{
        printf("Dibawah 18 Jam tidak ada Sanksi");
    }
}
