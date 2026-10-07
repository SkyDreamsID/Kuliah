#include <stdio.h>

int V, R = 0;
float I, Rtotal, Rtotal_rangkaian, Vp = 0.0;
int i;

void main(){
    printf("Masukkan Nilai Resistor : ");
    scanf("%d", &R);
    printf("Masukkan Tegangan : ");
    scanf("%d", &V);

    for(i = 1; i <= 2; i++){
        Vp = Vp + (1.0 / R);
    }
    
    Rtotal = 1.0 / Vp;
    Rtotal_rangkaian = R + Rtotal;
    I = V / Rtotal_rangkaian;
    Vp = I * Rtotal;
    
    printf("\nTegangan pada rangkaian paralel adalah = %.2f V\n", Vp);
}