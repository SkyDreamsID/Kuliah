#include <stdio.h>

int jumlah_resistor, Resistor;
float R, R_total;

void main(){
    printf("Jumlah Resistor: ");
    scanf("%d", &jumlah_resistor);
    printf("Nilai Resistor: ");
    scanf("%f", &R);
    for(Resistor=1;Resistor<=jumlah_resistor;Resistor++){
        printf("R%d = %.2f Ohm\n", Resistor, R);
        R_total = R_total + (1/R);
    }
    R_total = 1/R_total;
    printf("Hasil Resistansi Total = %.2f Ohm", 1/R_total);
}