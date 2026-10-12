#include <stdio.h>

int R1, R2, R3, R4, R5, R6, v;

float V1, V2, V3, V4, V5, V6;
float Rparalel_total, Rrangkaian1_total, Arus_rangkaian1, Arus_rangkaian2;

void rangkaian1(int voltase){
    printf("masukkan nilai R1 = ");
    scanf("%d", &R1);
    printf("masukkan nilai R2 = ");
    scanf("%d", &R2);
    printf("masukkan nilai R3 = ");
    scanf("%d", &R3);
    printf("masukkan nilai R4 = ");
    scanf("%d", &R4);

    ///ngitung ---
    Rparalel_total    = (float)(R2 * R4) / (float)(R2 + R4);
    Rrangkaian1_total = (float)R1 + Rparalel_total + (float)R3;
    Arus_rangkaian1   = (float)voltase / Rrangkaian1_total;

    V1 = Arus_rangkaian1 * (float)R1;
    V2 = Arus_rangkaian1 * Rparalel_total;
    V3 = Arus_rangkaian1 * (float)R3;
    V4 = V2;

    
}

void rangkaian2(int voltase){
    printf("masukkan nilai R5 = ");
    scanf("%d", &R5);
    printf("masukkan nilai R6 = ");
    scanf("%d", &R6);

    ///ngitung ---
    Rparalel_total  = (float)(R5 * R6) / (float)(R5 + R6);
    Arus_rangkaian2 = (float)voltase / Rparalel_total;

    V5 = Arus_rangkaian2 * Rparalel_total;
    V6 = V5;
}

void main(){
    int A;
    printf("Masukkan tegangan : ");
    scanf("%d", &v);
    printf("Pilih rangkaian (1/2) : ");
    scanf("%d", &A);

    if(A == 1){
        rangkaian1(v);
        printf("V1 = %.2f Volt\n", V1);
        printf("V2 = %.2f Volt\n", V2);
        printf("V3 = %.2f Volt\n", V3);
        printf("V4 = %.2f Volt\n", V4);
    }
    else if(A == 2){
        rangkaian2(v);
        printf("V5 = %.2f Volt\n", V5);
        printf("V6 = %.2f Volt\n", V6);
    }
    else{
        printf("lu input apaan njir\n");
    }
}