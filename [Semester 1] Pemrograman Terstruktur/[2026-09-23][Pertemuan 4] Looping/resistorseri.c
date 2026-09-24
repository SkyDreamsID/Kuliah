#include <stdio.h>

int jumlah_resistor;
int nilai_resistor;
int i;
float r_total;

void main(){
    printf("Masukkan jumlah Resistor : ");
    scanf("%d", &jumlah_resistor);
    for(i = 1; i <= jumlah_resistor; i++){
        printf("Masukkan nilai Resistor %d : ", i);
        scanf("%d", &nilai_resistor);

        r_total += nilai_resistor;
    }

    printf("\nTotal Resistor Seri adalah = %.2f ohm\n", r_total);
}