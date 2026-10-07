#include <stdio.h>

int tegangan, nilai_resistor, resistor, jumlah_resistor;
float Rp, Rseri, VRp, I, jumlah = 0;
float VR1;

void main(){
    printf("Masukkan nilai tegangan : ");
    scanf("%d", &tegangan);
    printf("Masukkan Jumlah Resistor : ");
    scanf("%d", &jumlah_resistor);
    printf("Masukkan Nilai Resistor : ");
    scanf("%d", &nilai_resistor);

    for(resistor=2; resistor<=3; resistor++){
        jumlah = jumlah + (1.0/nilai_resistor);
    }

    Rp = 1.0/jumlah;
    printf("Hasil Rpararel = %.2f Ohm\n", Rp);

    Rseri = nilai_resistor + Rp;
    printf("Hasil Rseri = %.2f Ohm\n", Rseri);

    I = tegangan / Rseri;
    printf("Hasil I = %.6f A\n", I);

    VRp = I * Rp;
    printf("Hasil VRp = %.2fV\n", VRp);

    VR1 = I * nilai_resistor;
    printf("Hasil VR1 = %.2fV\n", VR1);
}