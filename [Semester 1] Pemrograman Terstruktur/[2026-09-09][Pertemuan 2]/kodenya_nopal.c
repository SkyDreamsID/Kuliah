#include <stdio.h>

float r, volume;
float pi = 3.14;

void main(){
    printf("Input jari jari bola: ");
    scanf("%f", &r);

    volume = (4.0/3.0) * pi * r * r * r;

    printf("Volume bola = %.2f", volume);
}