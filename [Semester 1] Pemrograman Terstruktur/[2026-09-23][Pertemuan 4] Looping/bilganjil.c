#include <stdio.h>

int i;

void main(){
    for(i=0; i <= 100; i++){
        if(i % 2 == 1){
            printf("Bilangan ganjil = %d\n", i);
        }
    }
}