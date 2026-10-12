#include <stdio.h>

int V;
int R1, R2, R3, R4, R5, R6;
int saklar;

void saklar_1(){
    printf("Masukkan R1: "); 
    scanf("%d", &R1);
    printf("Masukkan R2: "); 
    scanf("%d", &R2);
    printf("Masukkan R3: "); 
    scanf("%d", &R3);
    printf("Masukkan R4: "); 
    scanf("%d", &R4);

    float Rp = (float)(R2 * R4) / (R2 + R4);
    float R_total = R1 + Rp + R3;
    float I = (float)V / R_total;
    
    float VR1 = I * R1;
    float VR2 = I * Rp;
    float VR3 = I * R3;
    float VR4 = VR2;
    
    printf("\nR Total = %.2f Ohm\n", R_total);
    printf("Arus = %.6f A (%.2f mA)\n", I, I * 1000);
    printf("VR 1 = %.2f V\n", VR1);
    printf("VR 2 = %.2f V\n", VR2);
    printf("VR 3 = %.2f V\n", VR3);
    printf("VR 4 = %.2f V\n", VR4);
}

void saklar_2(){
    printf("Masukkan R5: "); 
    scanf("%d", &R5);
    printf("Masukkan R6: "); 
    scanf("%d", &R6);

    float R_total = (float)(R5 * R6) / (R5 + R6);
    float I = (float)V / R_total;

    float VR5 = (float)V;
    float VR6 = (float)V;
    
    printf("\nR Total = %.2f Ohm\n", R_total);
    printf("Arus = %.2f A (%.2f mA)\n", I, I * 1000);
    printf("VR 5 = %.2f V\n", VR5);
    printf("VR 6 = %.2f V\n", VR6);
}

void main(){
    printf("Masukkan Tegangan : ");
    scanf("%d", &V);

    printf("\nPilih 1 atau 2 : ");
    scanf("%d", &saklar);

    if (saklar == 1){
        saklar_1();
    } else if (saklar == 2){
        saklar_2();
    } else {
        printf("\nSaklar tidak valid");
    }
}