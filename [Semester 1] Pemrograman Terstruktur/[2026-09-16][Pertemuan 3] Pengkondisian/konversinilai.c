#include <stdio.h>

int nilai;

void main(){
    printf("Masukkan Nilai Anda : ");
    scanf("%d", &nilai);

    if(nilai > 82){
        printf("Sangat Baik");
    }
    else if(nilai > 75){
        printf("Lebih dari baik");
    }
    else if(nilai > 67){
        printf("Baik");
    }
    else if(nilai > 59){
        printf("Lebih dari cukup");
    }
    else if(nilai > 49){
        printf("Cukup");
    }
    else if(nilai > 39){
        printf("Kurang");
    }
    else{
        printf("Gagal!!");
    }
}