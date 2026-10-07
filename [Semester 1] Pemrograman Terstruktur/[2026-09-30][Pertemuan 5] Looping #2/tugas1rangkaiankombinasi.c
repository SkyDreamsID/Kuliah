#include <stdio.h>

float V;
float R1 = 0.0, R2 = 0.0, R3 = 0.0;
float Rp, Rs, I, VRp, VR1, V_total;
int i;

void main() {
    printf("Masukkan Nilai V: ");
    scanf("%f", &V);

    printf("Masukkan Nilai R1: ");
    scanf("%f", &R1);
    printf("Masukkan Nilai R2: ");
    scanf("%f", &R2);
    printf("Masukkan Nilai R3: ");
    scanf("%f", &R3);

    Rp = (R2 * R3) / (R2 + R3);

    Rs = R1 + Rp;

    I = V / Rs;

    VR1 = I * R1;
    VRp = I * Rp;

    V_total = VR1 + VRp;

    printf("1. Rp (R2 // R3) = %.2f ohm\n", Rp);
    printf("2. Rs (R1 + Rp)  = %.2f ohm\n", Rs);
    printf("3. Arus Total (I)= %.6f A\n", I);
    printf("4. Tegangan VRp  = %.2f V\n", VRp);
    printf("   Tegangan VR1  = %.2f V\n", VR1);
    printf("5. Validasi Total= %.2f V\n", V_total);

    if (V_total == 12.0) {
        printf("Valid (V = 12V)\n");
    } else {
        printf("Tidak Valid\n");
    }
}