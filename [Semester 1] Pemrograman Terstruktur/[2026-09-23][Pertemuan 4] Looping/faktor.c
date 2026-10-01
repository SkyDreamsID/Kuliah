#include <stdio.h>

int i;
int bilangan;
int faktorial = 1;

void main(){
    printf("Masukkan Bilangan : ");
    scanf("%d", &bilangan);
    
    printf("Faktorial %d adalah -> ", bilangan);

    for(i=bilangan; i>=1; i--){
        
        faktorial = faktorial * i;

        printf("%d", i);

        if(i>1){
            printf(" x ");
        }

    }
    printf("\nHasilnya adalah = %d\n", faktorial);
}
