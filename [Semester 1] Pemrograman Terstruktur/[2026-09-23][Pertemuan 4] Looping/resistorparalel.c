#include <stdio.h>

int jumlah_resistor;
int i;
float nilai_resistor;
float r_total;

void main(){
    printf("Masukkan jumlah Resistor : ");
    scanf("%d", &jumlah_resistor);
    for(i = 1; i <= jumlah_resistor; i++){
        printf("Masukkan nilai Resistor %d : ", i);
        scanf("%f", &nilai_resistor);

        r_total += (1.0 / nilai_resistor);
    }

    r_total = 1.0 / r_total;
    

    printf("\nTotal Resistor Paralel adalah : %.2f Ohm\n", r_total);
}