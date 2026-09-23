#include <stdio.h>

int i;

void main(){
    for(i=0; i <= 100; i++){
        if(i % 2 == 0){
            printf("Bilangan genap = %d\n", i);
        } else{
            printf("Bilangan ganjil = %d\n", i);
        }
    }
}