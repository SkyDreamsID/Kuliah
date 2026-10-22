#include <stdio.h>

int n, r, faktorial = 1;

void n_faktor(int i){
    printf("Masukkan Nilai n : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++){
        faktorial = faktorial * i;
        printf("%d", faktorial);
    }
} 

void main(){
    n_faktor(n);
}