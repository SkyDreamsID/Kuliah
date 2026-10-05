#include <stdio.h>

int V, R = 0;
float I, tparalel, Rtotal, Rtotal_rangkaian, Vp = 0.0;
int i;

void main(){
    printf("Masukkan Nilai Resistor : ");
    scanf("%d", &R);
    printf("Masukkan Tegangan : ");
    scanf("%d", &V);

    for(i = 1; i <= 2; i++){
        tparalel = tparalel + (1.0 / R);
    }
    Rtotal = 1.0 / tparalel;
    Rtotal_rangkaian = R + Rtotal;
    I = V / Rtotal_rangkaian;
    Vp = I * Rtotal;
    printf("\nTegangan pada rangkaian paralel adalah = %.2f\n", Vp);
}