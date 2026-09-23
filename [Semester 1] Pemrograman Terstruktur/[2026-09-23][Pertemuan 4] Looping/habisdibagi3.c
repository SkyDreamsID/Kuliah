#include <stdio.h>

int i;

void main(){
    for(i=0; i<=100; i++){
        if(i % 3 == 0){
            printf("Bilangan habis dibagi 3 = %d\n", i);
        }
    }
}