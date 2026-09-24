#include <stdio.h>

int i;

void main(){
    for(i=1;i<=20;i++){
        if(i%5==0){
            printf("TRE %d\n", i);
        }
        else{
            printf("bilangan ke = %d\n", i);
        }
    }
}